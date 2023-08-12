COMPILER = g++
COMPILER_VERSION = -std=c++2a
COMPILER_FLAGS = ${COMPILER_VERSION} -O3

WARNINGS = -pedantic -pedantic-errors -Wall -Wextra -Wcast-align -Wcast-qual -Wctor-dtor-privacy -Wdisabled-optimization -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wnoexcept -Woverloaded-virtual -Wredundant-decls -Wshadow -Wsign-conversion -Wsign-promo -Wstrict-null-sentinel -Wswitch-default -Wundef -Wno-unused -Wfloat-equal -Wconversion -Winline -Wzero-as-null-pointer-constant -Wmissing-noreturn -Wunreachable-code -Wvariadic-macros -Wwrite-strings -Wunsafe-loop-optimizations -Werror

INCLUDE = -Iinclude/ -I/usr/include/freetype2
LIBRARIES = -lncurses -ldl -lglfw -L/usr/local/lib -lfreetype
RESOURCES = ./resources

SOURCES = $(shell find src -name '*.cpp')

OUTPUT_FOLDER = ./build
OUTPUT_FILE = main

VALGRIND_FLAGS = --leak-check=full --show-leak-kinds=all --verbose -s --track-origins=yes

TEST_SOURCES = $(shell find tests src -type f -name '*.cpp')
TEST_COMPILER_FLAGS = ${COMPILER_VERSION} --coverage -fPIC -O0
TEST_INCLUDES = -IincludeTests/
TEST_LIBRARIES = ${LIBRARIES} -lgtest
TEST_RESOURCES =
TEST_OUTPUT_FOLDER = ./testing
TEST_OUTPUT_FILE = test

BRANCH_COVERAGE = --rc lcov_branch_coverage=1

LCOV_FILES = $(shell find . -name '*.gcno' -o -name '*.gcda' -o -name '*.info')
LCOV_FLAGS = --no-external --capture ${BRANCH_COVERAGE} -d .
LCOV_OUTPUT_FOLDER = ${TEST_OUTPUT_FOLDER}
LCOV_OUTPUT_FILE = coverage.info
LCOV_REMOVE_FILES = '*/tests/*' '*/glad.c' '*/include/*'

GENHTML_FLAGS = ${BRANCH_COVERAGE}
GENHTML_OUTPUT_FOLDER = ./coverage

TIDY_SOURCES = $(shell find src -type f -not -path '*/opengl/*' -name '*.cpp')

default: compile

compile: ${SOURCES} glad.c
	${COMPILER} ${COMPILER_FLAGS} ${WARNINGS} ${INCLUDE} $^  ${LIBRARIES} -o ${OUTPUT_FOLDER}/${OUTPUT_FILE}
	cp -r ${RESOURCES} ${OUTPUT_FOLDER}

run: compile
	${OUTPUT_FOLDER}/${OUTPUT_FILE}

debug: ${SOURCES} glad.c
	${COMPILER} ${COMPILER_FLAGS} ${WARNINGS} ${INCLUDE} -g $^ ${LIBRARIES} -o ${OUTPUT_FOLDER}/${OUTPUT_FILE}

valgrind: debug
	valgrind ${VALGRIND_FLAGS} ${OUTPUT_FOLDER}/${OUTPUT_FILE}

delete_lcov_and_make_testing_folder: ${LCOV_FILES}
	rm -rf $^
	mkdir -p ${TEST_OUTPUT_FOLDER}

copy_and_run_test:
	cp -r ${RESOURCES} ${OUTPUT_FOLDER}
	cp ${TEST_OUTPUT_FOLDER}/${TEST_OUTPUT_FILE} ${OUTPUT_FOLDER}/${TEST_OUTPUT_FILE}
	${OUTPUT_FOLDER}/${TEST_OUTPUT_FILE}

build_test: ${TEST_SOURCES} glad.c
	${MAKE} delete_lcov_and_make_testing_folder
	${COMPILER} ${TEST_COMPILER_FLAGS} ${WARNINGS} ${INCLUDE} ${TEST_INCLUDES} $^ ${TEST_LIBRARIES} -o ${TEST_OUTPUT_FOLDER}/${TEST_OUTPUT_FILE}
	${MAKE} copy_and_run_test

lcov: build_test
	mkdir -p ${LCOV_OUTPUT_FOLDER}
	lcov ${LCOV_FLAGS} -o ${LCOV_OUTPUT_FOLDER}/${LCOV_OUTPUT_FILE}
	lcov --remove ${LCOV_OUTPUT_FOLDER}/${LCOV_OUTPUT_FILE} ${LCOV_REMOVE_FILES} ${BRANCH_COVERAGE} -o ${LCOV_OUTPUT_FOLDER}/${LCOV_OUTPUT_FILE}

genhtml: lcov
	rm -rf ${GENHTML_OUTPUT_FOLDER}
	mkdir -p ${GENHTML_OUTPUT_FOLDER}
	genhtml ${LCOV_OUTPUT_FOLDER}/${LCOV_OUTPUT_FILE} ${BRANCH_COVERAGE} --output-directory ${GENHTML_OUTPUT_FOLDER}

coverage: genhtml
	rm -rf ${TEST_OUTPUT_FOLDER}
	rm -rf ${LCOV_OUTPUT_FOLDER}

tidy: ${TIDY_SOURCES}
	clang-tidy $^ -- ${INCLUDE}

.PHONY: docs
docs:
	doxygen Doxyfile
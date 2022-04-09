COMPILER = g++
CFLAGS = -std=c++2a -O3 -pthread
WARNINGS = -pedantic -pedantic-errors -Wall -Wextra -Wcast-align -Wcast-qual -Wctor-dtor-privacy -Wdisabled-optimization -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wnoexcept -Woverloaded-virtual -Wredundant-decls -Wshadow -Wsign-conversion -Wsign-promo -Wstrict-null-sentinel -Wswitch-default -Wundef -Wno-unused -Wfloat-equal -Wconversion -Winline -Wzero-as-null-pointer-constant -Wmissing-noreturn -Wunreachable-code -Wvariadic-macros -Wwrite-strings -Wunsafe-loop-optimizations -Werror
VFLAGS = --leak-check=full --show-leak-kinds=all --verbose -s --track-origins=yes
LIBRARIES = -lncurses -ldl -lglfw -L/usr/local/lib -lfreetype
INC = -Iinclude/ -I/usr/include/freetype2
SOURCES = $(shell find . -name '*.cpp')
_OBJ = $(SOURCES:.cpp=.o)
OBJ = $(patsubst %,$(OBJDIR)/%,$(_OBJ))

default: compile

compile: ${SOURCES} glad.c
	${COMPILER} ${CFLAGS} ${WARNINGS} ${INC} $^  ${LIBRARIES} -o ./build/main

run: compile
	./build/main

debug: ${SOURCES}
	${COMPILER} ${CFLAGS} ${WARNINGS} ${INC} -g $^ ${LIBRARIES} -o ./build/main

valgrind: debug
	valgrind ${VFLAGS} ./build/main

.PHONY: docs
docs: 
	doxygen Doxyfile
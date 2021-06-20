COMPILER = g++
CFLAGS = -std=c++11
VFLAGS = --leak-check=full -s --track-origins=yes
SOURCES = $(wildcard *.cpp)

default: build

build: ${SOURCES}
	${COMPILER} ${CFLAGS} $^ -o main

run: build
	./main

valgrind: build
	valgrind ${VFLAGS} ./main
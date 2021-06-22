COMPILER = g++
CFLAGS = -std=c++2a -O3
VFLAGS = --leak-check=full --show-leak-kinds=all -s --track-origins=yes
SOURCES = $(wildcard *.cpp)

default: build

build: ${SOURCES}
	${COMPILER} ${CFLAGS} $^ -o main

run: build
	./main

valgrind: build
	valgrind ${VFLAGS} ./main
FLAGS= -Wall -g
CC=gcc

all: graph

graph: main.o edge.o node.o
	$(CC) $(FLAGS) -o graph main.o edge.o node.o -lm

main.o: main.c node.h edge.h
	$(CC) $(FLAGS) -c main.c -lm

node.o: node.c main.h edge.h
	$(CC) $(FLAGS) -c node.c -lm

edge.o: edge.c
	$(CC) $(FLAGS) -c edge.c -lm


PHONY: all clean
clean:
	rm -f *.a *.o
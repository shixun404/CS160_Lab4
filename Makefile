CC=gcc
CFLAGS=-fopenmp

all: matmul q1 q2

matmul: matmul.c
	$(CC) matmul.c -o matmul $(CFLAGS)

q1: q1.c
	$(CC) q1.c -o q1 $(CFLAGS)

q2: q2.c
	$(CC) q2.c -o q2 $(CFLAGS)

clean:
	rm -f matmul q1 q2

CC = gcc
CFLAGS = -Wall -g

all: main.o utils.o
	$(CC) $(CFLAGS) main.o utils.o -o my_app

main.o: main.c utils.h
	$(CC) $(CFLAGS) -c main.c -o main.o

utils.o: utils.o utils.h
	$(CC) $(CFLAGS) -c utils.c -o utils.o

math_ops: math_ops.o
	$(CC) $(CFLAGS) math_ops.o -o math_ops

math_ops.o: math_ops.c
	$(CC) $(CFLAGS) -c math_ops.c -o math_ops.o

clean:
	rm -rf math_ops math_ops.o main.o utils.o my_app

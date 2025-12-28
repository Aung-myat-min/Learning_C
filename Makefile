# Makefile example

# Variables (optional, but good practice)
CC = gcc # Compiler to use
CFLAGS = -Wall -g # Compilation flags: -Wall (all warnings), -g (debug info)

# All target (default target when 'make' is run without arguments)
all: hello

# Rule to build the 'hello' executable
hello: hello.o # Dependencies: hello.o (object file)
	$(CC) $(CFLAGS) hello.o -o hello # Command to link the object file into an executable

# Rule to compile 'hello.c' into 'hello.o' (object file)
hello.o: hello.c # Dependencies: hello.c (source file)
	$(CC) $(CFLAGS) -c hello.c -o hello.o # Command to compile source to object file (-c flag)

# Rule to clean up generated files
clean:
	rm -f hello hello.o # Command to remove the executable and object file
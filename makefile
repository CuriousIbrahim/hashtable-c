CC=gcc
CFLAGS=-Iinclude


main: src/hashtable.c tests/tests.c
	$(CC) tests/tests.c src/hashtable.c -o main -Iinclude
CC=gcc
CFLAGS=-I.

linking: main2.o addvec.o multvec.o
	$(CC) -g -o linking main2.o addvec.o multvec.o -I.


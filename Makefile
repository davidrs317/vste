CC = gcc
CFLAGS = -g -Wall -Werror

default: vste

vste: vste.o main.o
	$(CC) $(CFLAGS) -o vste vste.o main.o

vste.o: vste.c vste.h
	$(CC) $(CFLAGS) -c vste.c

main.o: main.c vste.h
	$(CC) $(CFLAGS) -c main.c

clean:
	$(RM) vste *.o *~

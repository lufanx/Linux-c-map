.PHONY:clean
CC=gcc

ALL:char/c_isalnum

char/c_isalnum:char/c_isalnum.o
	$(CC) -o $@ $<
char/c_isalnum.o:char/c_isalnum.c
	$(CC) -o $@ -c -Iinclude $<

clean:
	rm -fr char/c_isalnum char/c_isalnum.o

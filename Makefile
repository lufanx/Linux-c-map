.PHONY:clean
CC=gcc

ALL:char/c_isalnum char/c_isalpha char/c_isascii

char/c_isascii:char/c_isascii.o
	$(CC) -o $@ $<

char/c_isascii.o:char/c_isascii.c
	$(CC) -o $@ -c $<

char/c_isalpha:char/c_isalpha.o
	$(CC) -o $@ $<

char/c_isalpha.o:char/c_isalpha.c
	$(CC) -o $@ -Iinclude -c $<

char/c_isalnum:char/c_isalnum.o
	$(CC) -o $@ $<

char/c_isalnum.o:char/c_isalnum.c
	$(CC) -o $@ -Iinclude -c $<

clean:
	rm -fr char/c_isalnum char/c_isalnum.o char/c_isalpha char/c_isalpha.o	\
	char/c_isascii char/c_isascii.o

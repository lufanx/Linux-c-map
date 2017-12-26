.PHONY:clean

all_c=$(sort $(wildcard char/*.c))
objects=$(sort $(patsubst %.c, %.o, $(all_c)))
all_app=$(sort $(basename $(objects)))

ALL:$(all_app)

c_isalnum:c_isalnum.o
	$(CC) $(CFLAGS) -o $@ $<

c_isalnum.o:c_isalnum.c
	$(CC) $(CFLAGS) -o $@ -c $<

c_isascii:c_isascii.o
	$(CC) $(CFLAGS) -o $@ $<

c_isascii.o:c_isascii.c
	$(CC) $(CFLAGS) -o $@ -c $<

c_isdigit:c_isdigit.o
	$(CC) $(CFLAGS) -o $@ $<

c_isdigit.o:c_isdigit.c
	$(CC) $(CFLAGS) -o $@ -c $<

c_ispha:c_ispha.o
	$(CC) $(CFLAGS) -o $@ $<

c_ispha.o:c_ispha.c
	$(CC) $(CFLAGS) -o $@ -c $<

c_islower:c_islower.o
	$(CC) $(CFLAGS) -o $@ $<

c_islower.o:c_islower.c
	$(CC) $(CFLAGS) -o $@ -c $<

c_isupper:c_isupper.o
	$(CC) $(CFLAGS) -o $@ $<

c_isupper.o:c_isupper.c
	$(CC) $(CFLAGS) -o $@ -c $<

c_isxdigit:c_isxdigit.o
	$(CC) $(CFLAGS) -o $@ $<

c_isxdigit.o:c_isxdigit.c
	$(CC) $(CFLAGS) -o $@ -c $<
	
c_isspace:c_isspace.o
	$(CC) $(CFLAGS) -o $@ $<

c_isspace.o:c_isspace.c
	$(CC) $(CFLAGS) -o $@ -c $<

c_isprint:c_isprint.o
	$(CC) $(CFLAGS) -o $@ $<

c_isprint.o:c_isprint.c
	$(CC) $(CFLAGS) -o $@ -c $<

c_ispunct:c_ispunct.c
	$(CC) $(CFLAGS) -o $@ $<

c_ispunct.o:c_ispunct.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -fr $(objects) $(all_app)

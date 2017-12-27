#.PHONY:clean

all_c=$(wildcard string/*.c)
string_objects=$(patsubst %.c, %.o, $(all_c))
string_all_app=$(basename $(string_objects))

ALL:$(string_all_app)

c_atof:c_atof.o
	$(CC) $(CFLAGS) -o $@ $<
c_atof.o:c_atof.c
	$(CC) $(CFLAGS) -o $@ -c $<
c_atoi:c_atoi.o
	$(CC) $(CFLAGS) -o $@ $<
c_atoi.o:c_atoi.c
	$(CC) $(CFLAGS) -o $@ -c $<
c_atol:c_atol.o
	$(CC) $(CFLAGS) -o $@ $<
c_atol.o:c_atol.c
	$(CC) $(CFLAGS) -o $@ -c $<
c_gcvt:c_gcvt.o
	$(CC) $(CFLAGS) -o $@ $<
c_gcvt.o:c_gcvt.c
	$(CC) $(CFLAGS) -o $@ -c $<

#clean:
#	rm -fr $(string_all_app) $(string_objects)

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

#clean:
#	rm -fr $(string_all_app) $(string_objects)

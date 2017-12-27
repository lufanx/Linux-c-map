#.PHONY:clean

all_c=$(wildcard string/*.c)
objects=$(patsubst %.c, %.o, $(all_c))
all_app=$(basename $(objects))

ALL:$(all_app)

c_atof:c_atof.o
	$(CC) $(CFLAGS) -o $@ $<
c_atof.o:c_atof.c
	$(CC) $(CFLAGS) -o $@ -c $<

#clean:
#	rm -fr $(all_app) $(objects)

all_c := $(wildcard *.c)
char_objects := $(patsubst %.c, %.o, $(all_c))
char_all_app := $(basename $(char_objects))

ALL:$(char_all_app)

$(char_all_app):%:%.o
	$(CC) $(CFLAGS) -o $@ $<

%.o:%.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) $(char_objects) $(char_all_app)

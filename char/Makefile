all_c := $(wildcard *.c)
char_objects := $(patsubst %.c, %.o, $(all_c))
char_all_app := $(basename $(char_objects))

ALL:$(char_all_app)

$(char_all_app):$(char_objects)
	$(CC) $(CFLAGS) -o $@ $<

$(char_objects):$(all_c)
	$(CC) $(CFLAGS) -o $@ -c $<

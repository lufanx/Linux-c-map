all_c := $(wildcard *.c)
all_o := $(patsubst %.c, %.o, $(all_c));
all_app := $(basename $(all_o))

ALL:$(all_app)

$(all_app):%:%.o
	$(CC) $(CFLAGS) -o $@ $<

%.o:%.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) $(all_app) $(all_o)

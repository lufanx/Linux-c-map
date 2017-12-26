.PHONY:clean

all_c=$(sort $(wildcard char/*.c))
objects=$(sort $(patsubst %.c, %.o, $(all_c)))
all_app=$(sort $(basename $(objects)))

ALL:$(all_app)

$(all_app):$(objects)
	$(CC) $(CFLAGS) -o $@ $<

$(objects):$(all_c)
	$(CC) $(CFLAGS) -o $@ -Iinclude -c $<

clean:
	rm -fr $(objects) $(all_app)

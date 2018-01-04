C_MAP_ROOT_DIR := $(CURDIR)

.PHONY:subsystem clean
include $(C_MAP_ROOT_DIR)/mk/c_map.common.mk

include $(C_MAP_ROOT_DIR)/mk/c_map.called.mk

char_all_o := $(patsubst %.c, %.o, $(wildcard char/*.c))
char_all_app := $(basename $(char_all_o))

clean:
	-rm -fr $(char_all_o) $(char_all_app)

C_MAP_ROOT_DIR := $(CURDIR)

.PHONY:subsystem clean
include $(C_MAP_ROOT_DIR)/mk/c_map.common.mk

DIRS := char file math sort string time

include $(C_MAP_ROOT_DIR)/mk/c_map.called.mk

#char_all_o := $(patsubst %.c, %.o, $(wildcard char/*.c))
#char_all_app := $(basename $(char_all_o))

clean:
	@for n in $(DIRS); do $(MAKE) -C $$n clean; done

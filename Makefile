C_MAP_ROOT_DIR := $(CURDIR)

.PHONY:subsystem clean
include $(C_MAP_ROOT_DIR)/mk/c_map.common.mk

DIRS := char file math sort string time socket

include $(C_MAP_ROOT_DIR)/mk/c_map.called.mk

clean:
	@for n in $(DIRS); do $(MAKE) -C $$n clean; done

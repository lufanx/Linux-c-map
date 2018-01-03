C_MAP_ROOT_DIR := $(CURDIR)

.PHONY:clean
include $(C_MAP_ROOT_DIR)/mk/c_map.common.mk
#include $(CURDIR)/char/Makefile

DIRS-y := char
include $(C_MAP_ROOT_DIR)/mk/c_map.called.mk
#include $(C_MAP_ROOT_DIR)/string/Makefile
#include $(C_MAP_ROOT_DIR)/char/Makefile
clean:
	-rm -fr $(char_objects) $(char_all_app)

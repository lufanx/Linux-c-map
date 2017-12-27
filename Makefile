C_MAP_ROOT_DIR := $(CURDIR)

.PHONY:clean
include $(CURDIR)/mk/c_map.common.mk
#include $(CURDIR)/char/Makefile
include $(C_MAP_ROOT_DIR)/string/Makefile
clean:
	rm -fr $(char_objects) $(char_all_app) $(string_objects) $(string_all_app)

C_MAP_ROOT_DIR := $(CURDIR)

.PHONY:clean
include $(CURDIR)/mk/c_map.common.mk
include $(CURDIR)/char/Makefile
include $(C_MAP_ROOT_DIR)/string/Makefile
clean:
	rm -fr $(objects) $(all_app)

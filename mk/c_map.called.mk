subsystem:
	@for n in $(DIRS); do $(MAKE) -C $$n; done

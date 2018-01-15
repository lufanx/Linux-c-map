C_KEYWORD_DIRS := define static const

subsystem:
	@for n in $(C_KEYWORD_DIRS); do $(MAKE) -C $$n; done

clean:
	@for n in $(C_KEYWORD_DIRS); do $(MAKE) -C $$n clean; done


SOURCE = foo.c bar.c baz.s ugh.h

SOME_OF_FILE = $(filter %.c %.s, $(SOURCE))
ANOTHER_FILE = $(filter-out %.c %.s, $(SOURCE))

.PHONY:all
all:
	@echo $(SOME_OF_FILE)
	@echo $(ANOTHER_FILE)

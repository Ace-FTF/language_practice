without_dir = foo.c bar.c main.o
with_dir = $(addprefix  objs/, $(without_dir))

.PHONY:all
all:
	@echo $(with_dir)

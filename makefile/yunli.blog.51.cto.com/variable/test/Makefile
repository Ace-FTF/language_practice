CC = gcc
RM = rm -rf

EXE = simple.exe
SRCS = $(wildcard *.c)
OBJS = $(patsubst %.c, %.o, $(SRCS))

$(EXE): $(OBJS)
	$(CC) -o $@ $^

%.o : %.c
	$(CC) -o $@ -c $^

.PHONY:clean
clean:
	@echo "\$$(EXE) = $(EXE)"
	@echo "\$$(SRCS) = $(SRCS)"
	@echo "\$$(OBJS) = $(OBJS)"
	$(RM) $(OBJS) $(EXE)


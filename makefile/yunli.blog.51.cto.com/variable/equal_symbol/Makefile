x = before
y = $(x)_AAAA
x = later

xx := before
yy := $(xx)_AAAA
xx := later

VAR_A=abc
VAR_B=$(VAR_A) 222
VAR_C:=$(VAR_A)
VAR_A=def

.PHONY:all
all:
	@echo "---------------------------------"
	@echo "\$$(x)  = $(x)"
	@echo "\$$(xx) = $(xx)"
	@echo "x  = $(y)"
	@echo "xx = $(yy)"
	@echo "---------------------------------"
	@echo "VAR_A = $(VAR_A)"
	@echo "VAR_B = $(VAR_B)"
	@echo "VAR_C = $(VAR_C)"
	@echo "---------------------------------"



VERSION = 1.0.0

SOURCE = $(wildcard *.c)               #指定目录下所有的.c文件
OBJ = $(patsubst %.c, %.o, $(SOURCE))  #替换所有的.c文件为.o文件
INCLUDES = -I./include                 #gcc参数-I.指定头文件路径

LIBNAME = caculate                     #库文件名称。注意：库文件不用写前面的lib前缀和.so后缀
LIBS = -l$(LIBNAME)                    #库文件编译选项-l
LIB_PATH = -L./lib                     #库文件路径

DEBUG = -D_MACRO                       #????啥意思？啥作用？没看懂
CFLAGS = -Wall -c                      #gcc编译参数，-Wall表示生成所有警告信息，-c表示只编译并生成目标文件

TARGET = app                           #要生成的可执行文件
CC = gcc                               #编译命令

$(TARGET): $(OBJ)
	@echo "TARGET="$(TARGET)
	@echo "SOURCE="$(SOURCE)
	@echo "OBJ="$(OBJ)
	@mkdir -p output/                  #创建一个目录，用于存放已编译的目标
	$(CC) output/$(OBJ).o $(LIB_PATH) $(LIBS) -o output/$(TARGET)

%.o: %.c
	$(CC) $(INCLUDES) $(DEBUG) $(CFLAGS) $< -o output/$@


.PHONY: clean
clean:
	rm -rf output/*


















#########################################
OBJ = main

$(OBJ) : %.c
	gcc $^ -o $@ -L ./lib/ -lcaculate  -Wl,-rpath,$(pwd)/lib/

clean:
	rm -rf $(OBJ)

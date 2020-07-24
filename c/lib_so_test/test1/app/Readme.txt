使用动态链接库命令：
gcc main.c -o main -L ./ -lcaculate

其中：
-L 指定链接库的路径
-l 后面跟链接库的名称，要省略前缀lib和后缀.so，编译器会自动解析加上前后缀的

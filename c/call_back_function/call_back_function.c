#include <stdio.h>

/* 函数功能实现 */
int Add(int x, int y) {
    printf("回调打印Add\r\n");
    return ((x) + (y));
}

int Sub(int x, int y) {
    printf("回调打印Sub\r\n");
    return ((x) - (y));
}

/* 重命名函数指针类型 */
typedef int (*pFunc)(int a, int b);

/* 定义回调函数 */
int CallBackFunc(int x, int y, pFunc func) {
    return func(x, y);
}

/* 定义回调函数，通过该函数传参其他功能函数指针，从而调用对应功能 */
//int CallBackFunc(int x, int y, int (*pFunc)(int a, int b)) {
//    return (*pFunc)(x, y);
//}

/* 主函数 */
int main(int argc, char argv[]) {
    int a = 1;
    int b = 2;

    CallBackFunc(a, b, &Add);
    CallBackFunc(a, b, &Sub);

    return 0;
}

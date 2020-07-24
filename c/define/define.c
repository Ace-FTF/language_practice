/* 版权声明
 * 功能     ：
 * 作者     ：lsy
 * 文件路径 : /home/lsy/practice/c/define/define.c
 * 创建时间 ：2020/05/12 13:09
 */

#include <stdio.h>
#include <string.h>

//#define TEST_AGE_5 0x000B;

typedef struct {
    int name;
    int age;
#define TEST_AGE_1 0x0001;
#define TEST_AGE_2 0x0002;
#define TEST_AGE_3 0x0003;
#define TEST_AGE_4 0x0004;
#define TEST_AGE_5 0x000A;
    int id;
} Student;

int main(int argc, char *argv[]) {
    Student lsy;
    int otherStudent;

    lsy.age = TEST_AGE_5;
    otherStudent = TEST_AGE_5;

    printf("sizeof(Student) = %ld\r\n", sizeof(Student));
    printf("lsy.age = %d\r\n", lsy.age);
    printf("otherStudent = %d\r\n", otherStudent);

    return 0;
}


/* 版权声明
 * 功能     ：
 * 作者     ：lsy
 * 文件路径 : /home/lsy/practice/language_practice/c/struct/struct_test.c
 * 创建时间 ：2020/07/09 12:26
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* 结构体 */
typedef struct _BB {
    char name[20];
    int age;
} BB, *pBB;

typedef struct _AA {
    BB  student;
    struct _AA *next;
} AA, *pAA;

AA *head = NULL;

/* 测试函数 */
void TestFunc(BB *value) {
    static AA *tail = NULL;
    AA *temp = NULL;

    temp = (AA *)malloc(sizeof(AA));
    memset(temp, 0, sizeof(AA));
    memcpy(&(temp->student), value, sizeof(BB));

    printf("name: %s\r\n", temp->student.name);
    printf("age : %d\r\n", temp->student.age);

    if (head == NULL) {
        head = temp;
        tail = temp;
    } else {
        tail->next = temp;
        tail = tail->next;;
        tail->next = NULL;
    }
}

void PrintStuInfo(AA *node) {
    AA *temp = node;

    while (temp->next != NULL) {
        printf(); 
    }
}

/* 主函数 */
int main(int argc, char *argv[]) {
    BB lsy = {"lishiyuan", 20};
    BB wcl = {"wangchuangle", 21};

    TestFunc(&lsy);
    TestFunc(&wcl);

    return 0;
}


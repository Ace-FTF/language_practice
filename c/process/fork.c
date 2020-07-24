#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

/* 子进程 */
void ProcessChild(void)
{
    printf("Child.------------test = %d\r\n", test);
}

/* 父进程 */
void ProcessFather(void)
{
    printf("Father.test = %d\r\n", test);
}

/* 主函数 */
int main(void)
{
    int pid;
    int test = 0;

    printf("start:----------\r\n");

    pid  = fork();
    while (1) {
        if (pid < 0) {
            perror("fork:");
        } else if (pid == 0) {
            ProcessChild();
        } else {
            ProcessFather();
        }

        sleep(1);
    }

    printf("end:----------\r\n");

    return 0;
}

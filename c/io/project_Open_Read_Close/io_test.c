#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

int main(void)
{
    int fd_src = 0;
    int len_src;    /* 想要读取的字节长度 */
    char buf[1000]; /* 缓冲区：保存读出的内容 */
    char *pbuf = buf;
    ssize_t ret;

    printf("start:\r\n");

    /* open file */
    fd_src = open("src.txt", O_RDONLY);
    if (fd_src == -1) {
        perror("Open failed:");
        return -1;
    }

    /* read file
     * len_src:需要读取的字节长度
     * ret:读取到的字节长度
     */
    len_src = sizeof(buf);
    memset(buf, 0, sizeof(buf));
    while ((len_src != 0) &&
        ((ret = read(fd_src, (void *)pbuf, len_src)) != 0)) {
        if (ret == -1) {
            if (errno == EINTR) {
                continue;
            }
            perror("read:");
            break;
        }

        len_src = len_src - ret;
        pbuf = pbuf + ret;
    }

    /* print buff */
    printf("%s\r\n", buf);

    /* close file */
    close(fd_src);

    printf("end!\r\n");

    return 0;
}

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
    int fd_dest = 0;
    int len;        /* 想要读取or写入的字节长度 */
    char buf[1000]; /* 缓冲区：保存读出的内容 */
    char *pbuf = buf;
    ssize_t ret;

    printf("start:\r\n");

    /* 打开文件 */
    fd_src = open("src.txt", O_RDONLY);
    if (fd_src == -1) {
        perror("Open src failed:");
        return -1;
    }
    fd_dest = open("dest.txt", O_RDWR | O_TRUNC | O_CREAT, 0664);
    if (fd_dest == -1) {
        perror("Open dest failed:");
        return -1;
    }

    /* 读文件(src.txt)
     * len:需要读取的字节长度
     * ret:读取到的字节长度
     */
    len = sizeof(buf);
    memset(buf, 0, sizeof(buf));
    while ((len != 0) && ((ret = read(fd_src, (void *)buf, len)) != 0)) {
        if (ret == -1) {
            if (errno == EINTR) {
                continue;
            }
            perror("read:");
            break;
        }

        len = len - ret;
        pbuf = pbuf + ret;
    }

    /* 写文件(dest.txt) */
    pbuf = buf;
    len = strlen(buf);
    while ((len != 0) && ((ret = write(fd_dest, buf, len)) != 0)) {
        if (ret == -1) {
            if (errno == EINTR) {
                continue;
            }
            perror("write:");
            break;
        }
        len = len - ret;
        pbuf = pbuf + ret;
    }

    /* 关闭文件 */
    close(fd_src);
    close(fd_dest);

    printf("end!\r\n");

    return 0;
}

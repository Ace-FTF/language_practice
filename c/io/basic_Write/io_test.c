#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    int fd_src = 0;
    int fd_dest = 0;
    ssize_t len_src = 0;
    ssize_t len_dest = 0;
    char buf[1000];

    printf("start:\r\n");

    /* open file */
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

    /* read file to buff */
    memset(buf, 0, sizeof(buf));
    len_src = read(fd_src, (void *)buf, sizeof(buf));
    if (len_src == -1) {
        perror("Read failed:");
        return -1;
    }

    /* print buff */
    printf("%s\r\n", buf);

    /* write file */
    len_dest = write(fd_dest, (const char *)buf, strlen(buf));
    if (len_dest == -1) {
        perror("Write failed:");
        return -1;
    }
    memset(buf, 0, sizeof(buf));

    /* close file */
    close(fd_src);
    close(fd_dest);

    printf("end!\r\n");

    return 0;
}

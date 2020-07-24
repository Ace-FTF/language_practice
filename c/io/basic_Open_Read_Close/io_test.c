#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    int fd_src = 0;
    ssize_t len_src = 0;
    char buf[1000];

    printf("start:\r\n");

    /* open file */
    fd_src = open("src.txt", O_RDONLY);
    if (fd_src == -1) {
        perror("Open failed:");
        return -1;
    }

    /* read file */
    memset(buf, 0, sizeof(buf));
    len_src = read(fd_src, (void *)buf, sizeof(buf));
    if (len_src == -1) {
        perror("Read failed:");
        return -1;
    }

    /* print buff */
    printf("%s\r\n", buf);

    /* close file */
    close(fd_src);

    printf("end!\r\n");

    return 0;
}

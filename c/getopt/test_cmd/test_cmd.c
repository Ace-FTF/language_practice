#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int c = 0;

    printf("--------------------------\r\n");
    while ((c = getopt(argc, argv, "u:U:P:d:")) != -1) {
        switch (c) {
            case 'u':
                fprintf(stderr, "-u optarg = %s\r\n", optarg);
                break;
            case 'U':
                fprintf(stderr, "-U optarg = %s\r\n", optarg);
                break;
            case 'P':
                fprintf(stderr, "-P optarg = %s\r\n", optarg);
                break;
            case 'd':
                perror("spi_load_driver() failed");
                fprintf(stderr, "-d optarg = %s\r\n", optarg);
        }
    }
    printf("--------------------------\r\n");

    return EXIT_SUCCESS;
}


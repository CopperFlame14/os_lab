#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd1, fd2;
    char buffer[1024];
    int bytesRead;

    fd1 = open("fileA.txt", O_RDONLY);
    fd2 = open("fileB.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    if (fd1 < 0 || fd2 < 0) {
        printf("File error\n");
        return 1;
    }

    while ((bytesRead = read(fd1, buffer, sizeof(buffer))) > 0) {
        write(fd2, buffer, bytesRead);
    }

    close(fd1);
    close(fd2);

    printf("File copied successfully\n");
    return 0;
}

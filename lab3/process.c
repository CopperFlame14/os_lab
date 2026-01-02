#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        printf("Child Process\n");
        printf("PID: %d\n", getpid());
        exit(0);
    } else {
        wait(NULL);
        printf("Parent Process\n");
        printf("PID: %d\n", getpid());
    }
    return 0;
}

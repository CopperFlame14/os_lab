#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        // Child process
        printf("Child exiting\n");
        exit(0);
    } else {
        // Parent process
        sleep(10);   // Parent does not call wait()
        printf("Parent running\n");
    }

    return 0;
}

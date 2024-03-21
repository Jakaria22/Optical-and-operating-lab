#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid;

    pid = fork(); // create a new process

    if (pid < 0) { // fork failed
        fprintf(stderr, "Fork failed\n");
        return 1;
    } else if (pid == 0) { // child process
        printf("Child process is executing\n");
    } else { // parent process
        printf("Parent process is executing\n");
    }

    return 0;
}

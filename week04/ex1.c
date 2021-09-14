#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    int n = 1134;//Declaring of variable n

    int frk = fork();//New process
    if (frk < 0)
        return EXIT_FAILURE;
    if (frk == 0)
        printf("Hello from child %d, n = %d\n", getpid(), n);
    if (frk > 0)
        printf("Hello from parent %d, n = %d\n", getpid(), n);
    
    frk = fork();

    return EXIT_SUCCESS
 //Value of n same in the each program because fork() creates copy of the current program
}


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char command[250];

    while(true) {
        char *arg[100];
        int pos = 0;

        printf("->");
        scanf("%[^\n]%*c", command);

        arg[pos] = strtok(command, " ");

        while(arg[pos] != NULL) {
            pos++;
            arg[pos] = strtok(NULL, " ");
        }

        if(strcmp(argv[0], "exit")) {
            if (frk() == 0) execvp(argv[0], arg);
        } else return 0;

        wait(NULL);
    }

    return 0;
}

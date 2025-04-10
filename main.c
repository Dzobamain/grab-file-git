#include <stdio.h>
#include <string.h>

void help();

int main(int argc, char *argv[]) 
{
    if (argc < 2) {
        return 1;
    }

    if (strcmp(argv[1], "help") == 0) {
        help();
    } else {
        printf("Error: Unknown command\n");
    }

    return 0;
}

void help() {
    printf("\thelp\tprint all functions\n");
}
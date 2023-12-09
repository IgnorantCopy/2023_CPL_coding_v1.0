//
// Created by Ignorant on 2023/12/8.
//


#include <stdio.h>

// argv[0]: name of the program
// argv[1 ... argc - 1]: command line arguments
// argv[argc]: NULL
int main(int argc, char *argv[]) {
    // for version with argv
    for (int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    // for version with pointers
    for (char **ptr = argv; *ptr != NULL; ptr++) {
        printf("%s\n", *ptr);
    }
    // while version
    char **ptr = argv;
    while (*ptr != NULL) {
        printf("%s\n", *ptr++);
    }
    return 0;
}

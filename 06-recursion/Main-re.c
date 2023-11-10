//
// Created by Ignorant on 2023/11/10.
//

#include <stdio.h>

// not recommended:don't use a recursion in function main!!!
int main(int argc, char *argv[]) {
    if (argc == 1) {
        return 0;
    }
    printf("%s\n", argv[argc - 1]);
    main(argc - 1, argv);
    return 0;
}

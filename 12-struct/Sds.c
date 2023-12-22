//
// Created by Ignorant on 2023/12/22.
//


#include <stdio.h>

struct sdshdr {
    int len;
    int free;
    // flexible array member; zero-length array member
    char buffer[];
};


int main() {
    
    return 0;
}

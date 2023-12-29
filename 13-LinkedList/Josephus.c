//
// Created by Ignorant on 2023/12/22.
//


#include <stdio.h>
#include <assert.h>
#include "ll/ll.h"

#define NUM 12

void SitAroundCircle(LinkedList *list, int num);

void KillUntilOne(LinkedList *list);

int GetSurvivor(const LinkedList *list);
int main() {
    LinkedList list;
    Init(&list);
    SitAroundCircle(&list, NUM);
    Print(&list);
    KillUntilOne(&list);
    printf("%d : %d\n", NUM, GetSurvivor(&list));
    Free(&list);
    return 0;
}
void SitAroundCircle(LinkedList *list, int num) {
    for (int i = 1; i <= num; i++) {
        Append(list, i);
    }
}
void KillUntilOne(LinkedList *list) {
    Node *node = list->head;
    while (!IsSingleton(list)) {
        Delete(list, node);
        node = node->next;
    }
}

int GetSurvivor(const LinkedList *list) {
    assert(IsSingleton(list));
    return GetHeadValue(list);
}

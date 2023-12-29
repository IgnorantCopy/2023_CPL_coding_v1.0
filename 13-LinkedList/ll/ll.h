//
// Created by Ignorant on 2023/12/29.
//

// macro
// header guard
#ifndef INC_2023_CPL_CODING_V1_0_LL_H
#define INC_2023_CPL_CODING_V1_0_LL_H

#include <stdbool.h>
// 1.define data type: linked list (circular)
typedef struct Node {
    int index;
    struct Node *next;
} Node;

typedef struct LinkedList {
//    int size;
    Node *head;
    Node *tail;
} LinkedList;

// 2.functions on linked list (declarations)
void Init(LinkedList *list);
void Free(LinkedList *list);

bool IsEmpty(const LinkedList *list);
bool IsSingleton(const LinkedList *list);
int GetHeadValue(const LinkedList *list);
void Print(const LinkedList * list);
void Append(LinkedList *list, int index);
void Delete(LinkedList *list, Node *prev);
void Insert(LinkedList *list, Node *prev, int index);
Node *Search(LinkedList *list, int index);

#endif //INC_2023_CPL_CODING_V1_0_LL_H

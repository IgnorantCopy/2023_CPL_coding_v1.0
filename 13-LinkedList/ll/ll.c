//
// Created by Ignorant on 2023/12/29.
//

#include <stdio.h>
#include <stdlib.h>
#include "ll.h"

// functions on linked list (implementations)
void Init(LinkedList *list) {
    list->head = NULL;
    list->tail = NULL;
}

void Free(LinkedList *list) {
    if (IsEmpty(list)) {
        return;
    } else if (IsSingleton(list)) {
        free(list->head);
        return;
    }
    Node *node = list->head->next;
    while (node != list->tail) {
        Node *temp = node;
        node = node->next;
        free(temp);
    }
    free(list->tail);
    free(list->head);
}

bool IsEmpty(const LinkedList *list) {
    return list->head == NULL;
}

bool IsSingleton(const LinkedList *list) {
    return !IsEmpty(list) && list->head == list->tail;
}

int GetHeadValue(const LinkedList *list) {
    if (IsEmpty(list)) {
        return -1;
    }
    return list->head->index;
}

void Print(const LinkedList * list) {
    if (IsEmpty(list)) {
        printf("NULL\n");
        return;
    }
    Node *current = list->head;
    do {
        printf("%d ", current->index);
        current = current->next;
    } while (current != list->head);
    printf("\n");
}

void Append(LinkedList *list, int index) {
    Node *node = malloc(sizeof *node);
    if (node == NULL) {
        return;
    }
    node->index = index;
    if (IsEmpty(list)) {
        list->head = node;
    } else {
        list->tail->next = node;
    }
    list->tail = node;
    list->tail->next = list->head;
}

void Delete(LinkedList *list, Node *prev) {
    if (IsEmpty(list)) {
        return;
    } else if (IsSingleton(list)) {
        free(list->head);
        Init(list);
        return;
    }
    Node *current = prev->next;
    Node *next = current->next;
    prev->next = next;
    if (current == list->head) {
        list->head = next;
    } else if (current == list->tail) {
        list->tail = prev;
    }
    free(current);
}

void Insert(LinkedList *list, Node *prev, int index) {

}

Node *Search(LinkedList *list, int index) {

}

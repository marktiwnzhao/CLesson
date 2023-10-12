//
// Created by 赵政杰 on 2021/12/23.
//
/**
 * file: ll.c
 *
 * It includes the implementation of the linked list.
 */
//实现在c，声明在h

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "ll.h"

void Init(Linkedlist *list) {
    list->head = NULL;
    list->tail = NULL;
}

bool IsEmpty(const Linkedlist *list) {
    return list->head == NULL;
}

bool IsSingleton(const Linkedlist *list) {
    return !IsEmpty(list) && (list->head == list ->tail);
}

int HeadVal(const Linkedlist *list) {
    return list->head->val;
}
void Append(Linkedlist *list, int val) {
    Node *node = malloc(sizeof *node);
    if (node == NULL) {
        printf("Error: malloc failed in Append()\n");
        return;
    }
    node->val = val;

    if (list->tail == NULL) {
        list->head = node;
    } else {
        list->tail->next = node;
    }

    list->tail = node;
    node->next = list->head;
}
void Delete(Linkedlist *list, Node *prev) {
    Node *cur = prev->next;
    Node *next = cur->next;
    prev->next = next;

    if (cur == prev) {
        list->head = NULL;
        list->tail = NULL;
    }

    if (cur == list->head) {
        list->head = next;
    }

    if (cur == list->tail) {
        list->tail = prev;
    }

    free(cur);
}

void Print(Linkedlist *list) {
    if (IsEmpty(list)) {
        return;
    }

    Node *iter = list->head;
    do {
        printf("%d\t", iter->val);
        iter = iter->next;
    } while (iter != list->head);
}
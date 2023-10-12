//
// Created by 赵政杰 on 2021/12/23.
//
/**
 * file: ll.h
 *
 * It contains the declaration of types and functions
 * It does not contain the implementation of the linked list
 *
 */

#ifndef INC_11_LINKEDLIST_LL_H
#define INC_11_LINKEDLIST_LL_H

#include <stdbool.h>

typedef struct node {
    int val;
    struct node *next;//不能用别名代替(编译顺序)
} Node;

typedef struct ll {
    Node *head;
    Node *tail;
} Linkedlist;

void Init(Linkedlist *list);

bool IsEmpty(const Linkedlist *list);
bool IsSingleton(const Linkedlist *list);

int HeadVal(const Linkedlist *list);
void Append(Linkedlist *list, int val);
void Delete(Linkedlist *list, Node *prev);

void Print(Linkedlist *list);

void Free(Linkedlist *list);


#endif //INC_11_LINKEDLIST_LL_H

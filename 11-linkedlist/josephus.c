//
// Created by 赵政杰 on 2021/12/23.
//
//singly linked list
//doubly linked list
//circular linked list


#include <stdio.h>
#include "ll/ll.h"
//只关心声明，不关心如何实现
//gcc -o josephus josephus.c ll/ll.c

void SitAroundCircle(Linkedlist *list, int num);
void KillUntilOne(Linkedlist *list);
int GetSurvivor(const Linkedlist *list);

#define NUM 10

int main(int argc, char *argv[]) {
    Linkedlist list;
    Init(&list);

    SitAroundCircle(&list, NUM);
    //Print(&list);
    KillUntilOne(&list);
    printf("%d: %d\n", NUM, GetSurvivor(&list));
    return 0;
}

void SitAroundCircle(Linkedlist *list, int num) {
    for (int i = 1; i <= num; i++) {
        Append(list, i);
    }
}

void KillUntilOne(Linkedlist *list) {
    Node *node = list->head;

    while (! IsSingleton(list)) {
        Delete(list, node);
        node = node->next;
    }
}

int GetSurvivor(const Linkedlist *list) {
    return HeadVal(list);
}
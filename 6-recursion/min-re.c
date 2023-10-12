//
// Created by 赵政杰 on 2021/11/15.
//recursion:A function that calls itself 递归函数
//It's a looooong way to go to master recursion
//数学归纳法：Base Case + Inductive Step
//Programs run in memory; Memory = Stack + Heap + 。。。
//Each function has its own stack frame
//stack grows/shrinks with function call and return
#include <stdio.h>
#define MAX 5

int Min (int num[], int len);
int main() {
    int numbers[MAX] = { 0 };
    for (int i = 0; i < MAX; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("%d", Min(numbers, MAX));

    return 0;
}

int Min (int num[], int len) {
    if (len == 1) {
        return num[0];
    }
    int min = Min(num, len - 1);
    return num[len - 1] > min ? min : num[len - 1];
}


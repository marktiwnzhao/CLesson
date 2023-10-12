//
// Created by 赵政杰 on 2021/11/1.
//冒泡排序法：比较相邻两个并进行交换，多轮循环
//clock函数可以计算时间差，可以计算出程序运行时间，检查优化与否
//生成随机数
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN 50000

int a[LEN] = {0};
int t = 0;

int main() {
    srand(time(NULL));
    for (int i = 0; i < LEN; ++i) {
        a[i] = rand() % LEN;
    }

    clock_t  start = clock();

    for (int i = 0; i < LEN - 1; ++i) {
        for (int j = 0; j < LEN - 1 - i; ++j) {
            if (a[j] >= a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    clock_t diff;
    diff = clock() - start;
    long sec = diff / CLOCKS_PER_SEC;
    printf("Sorting time taken %d seconds.\n", sec);

    for (int i = 0; i < LEN; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}


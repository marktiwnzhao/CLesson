//
// Created by 赵政杰 on 2021/10/26.
//
//VLA:variable-length array可变长数组，不可初始化(>C99,maybe C11)
//VLA不可初始化
#include <stdio.h>
//以下为非VLA，MAX为符号常量，不加分号与等于！！
#define MAX 20
int numbers[MAX] = {0};
int main() {
    //int len = -1;
    //while (scanf("%d", &numbers[++len]) != EOF);
    int len = 0;
    while (scanf("%d", &numbers[len]) != EOF) len++;

    //int len = 0;
    //while(scanf("%d", &numbers[len++]) != EOF);
    //这段代码在判断EOF的时候还会加一；导致长度会比原长+1
    printf("\n");
    for (int i = 0; i < len; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    for (int i = 0; i < len; i++) {
        int min = numbers[i];
        int min_index = i;
        for (int j = i + 1; j < len; j++) {
            if (min > numbers[j]) {
                min = numbers[j];
                min_index = j;
            }
        }
        int tmp = 0;
        tmp = numbers[i];
        numbers[i] = numbers[min_index];
        numbers[min_index] = tmp;
    }
    printf("\n");
    for (int i = 0; i < len; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}


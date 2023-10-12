//
// Created by 赵政杰 on 2021/11/15.
//
#include <stdio.h>
#define MAX 5

int Sum (int num[], int len);

int main() {
    int numbers[MAX] = { 0 };
    for (int i = 0; i < MAX; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("%d", Sum(numbers, MAX));

    return 0;
}
int Sum (int num[], int len) {
    if (len == 1) {
        return num[0];
    }
    return num[len - 1] + Sum (num, len - 1);

}
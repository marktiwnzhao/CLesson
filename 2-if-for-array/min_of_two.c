//
// Created by 赵政杰 on 2021/10/18.
//
#include <stdio.h>
int main() {
    int a = 0;
    int b = 0;
    scanf("%d%d", &a, &b);
    int min = a >= b ? b : a;
    printf("min{%d, %d} = %d", a, b, min);
    return 0;
}

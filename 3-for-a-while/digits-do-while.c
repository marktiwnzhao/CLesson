//
// Created by 赵政杰 on 2021/10/27.
//
#include <stdio.h>
int main() {
    int n = 0;
    scanf("%d", &n);

    int num_of_digits = 0;

    do {
        n /= 10;
        num_of_digits++;
    } while (n > 0);//先做一次，在判断

    printf("N of digits is %d.\n", num_of_digits);
    return 0;
}

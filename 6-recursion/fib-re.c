//
// Created by 赵政杰 on 2021/11/15.
//
#include <stdio.h>

int Fib (int n);
int main() {
    int s = 0;
    scanf("%d", &s);
    printf("Fib(%d) = %d", s, Fib(s));

    return 0;
}

int Fib (int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    return Fib(n - 1) + Fib(n - 2);
}

//
// Created by 赵政杰 on 2021/11/15.
//
#include <stdio.h>

#define LEN 90


int main() {
    int n = 0;
    scanf("%d", &n);

    long long fib1 = 0;
    long long fib2 = 1;
    printf("%lld %lld ", fib1, fib2);

    for (int i = 2; i <= n; i++) {
        long long fib3 = fib1 + fib2;
        printf("%lld ", fib3);
        fib1 = fib2;
        fib2 = fib3;
    }
    return 0;
}


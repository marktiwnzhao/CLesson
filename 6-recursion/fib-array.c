//
// Created by 赵政杰 on 2021/11/15.
//
#include <stdio.h>
#include <limits.h>

#define LEN 90


int main() {
    long long fibs[LEN] = {0, 1};

    int n = 0;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        fibs[i] = fibs[i - 1] + fibs[i - 2];
    }

    for (int i = 0; i <= n; i++) {
        printf("%lld", fibs);
    }

    printf("\n%lld\n", LLONG_MAX);

    return 0;
}

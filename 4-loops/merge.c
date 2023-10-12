//
// Created by 赵政杰 on 2021/11/1.
//
#include <stdio.h>
#define LEN_L 6
#define LEN_R 6

int L[LEN_L] = {1, 2, 3, 5, 7, 9};
int R[LEN_R] = {0, 2, 4, 6, 8, 10};

int main() {
    int l = 0;
    int r = 0;

    while (l < LEN_L && r < LEN_R) {
        if (L[l] < R[r]) {
            printf("%d ", L[l]);
            l++;
        } else if(L[l] == R[r]) {
            printf("%d %d ", L[l], R[r]);
            l++;
            r++;
        } else {
            printf("%d ", R[r]);
            r++;
        }
    }

    while (l < LEN_L) {
        printf("%d ", L[l]);
        l++;
    }

    while (r < LEN_R) {
        printf("%d ", R[r]);
        r++;
    }

    return 0;
}

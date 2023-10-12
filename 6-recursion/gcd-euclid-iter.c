//
// Created by 赵政杰 on 2021/11/15.
//

#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d %d", &a, &b);

    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    printf("%d", a);
    return 0;
}
/**
 * while (b != 0) {
 *  int tmp = b;
 *   b = a % b;
 *   a = tmp;
 *}
 */
//
// Created by 赵政杰 on 2021/10/18.
//
#include <stdio.h>
int main() {
    int n = 0;
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {//i++ = i + 1,用分号！！！
        sum += i;/*表达式1（initialization）：只会执行一次；若表达式2（condition）成立，执行花括号（statement）里的语句；
      * 花括号执行完之后表达式3（increment）；循环回表达式2.
      */
    }
    printf("sum = %d.\n", sum);
    return 0;
}

//
// Created by 赵政杰 on 2021/10/18.
//
#include <stdio.h>
int main() {
    int numbers[5] = {0};
    /*
     * 声明五个整数
     * numbers[i]:数组中的第几个元素 array member access
     * []:下标运算符 subscript operator
     */
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }
    /*
     * Note:index from 0,not 1!!!
     */
    for (int i = 0; i < 5; i++) {
        printf("%d\t",numbers[i]);
    }
    int min = numbers[0];
    for (int i = 1; i < 5; i++) {
      if (min > numbers[i]) {
          min = numbers[i];
      }
    }
    printf("min = %d", min);
    return 0;
}
/*
 * int numbers[NUM] = {1}；   {1,0,0,0,0}
 * int numbers[] = {0};   {0}   系统帮你计数
 * int numbers[NUM] = {[2] = 1};    {0,0,1,0,0}
 * int numbers[NUM] = {};it's terrible.Forbidden in C99；Allowed by GCC by default.
 * int numbers[NUM];best not to use.(You need to give it a assignment after this.)
 * int numbers[];it's wrong.
*/

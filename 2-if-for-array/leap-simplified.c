//
// Created by 赵政杰 on 2021/10/18.
//
#include <stdio.h>
int main() {
    int year = 0;
    scanf("%d", &year);
    if (year % 4 != 0) {
        printf("The year %d is a common year.\n", year);
    } else if (year % 100 != 0) {
        printf("The year is %d is a leap year.\n", year);//一步一步判断是否符合条件
    } else if (year % 400 != 0) {
        printf("The year %d is a common year.\n", year);
    } else {
        printf("The year %d is a leap year.\n", year);
    }
    return 0;

}
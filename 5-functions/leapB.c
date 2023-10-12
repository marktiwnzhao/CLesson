//
// Created by 赵政杰 on 2021/11/8.
//
#include <stdio.h>

int IsLeapYear(int year) {
    //function body
    return (year % 4 == 0 && year % 100 != 100) || year % 400 == 0;
    //作用域
    //year:formal parameter 形式参数
}

//global variable(outside all functions)
//local variable(inside one of function)
int main() {
    int year;
    scanf("%d", &year);

    if (IsLeapYear(year)) {
        printf("The year %d is a leap year.\n", year);
    } else {
        printf("The year %d is not a leap year.\n", year);
    }

    return 0;
}
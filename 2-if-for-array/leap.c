//
// Created by 赵政杰 on 2021/10/18.
//
#include <stdio.h>
int main() {
    int year = 0;
    scanf("%d", &year);
    if ((year % 4 ==0 && year % 100 != 0) || (year % 400 ==0)) {//短路求值，&&，||，！
        printf("The year \"%d\" is a leap year.\n", year);
    } else {
        printf("The year \"%d\" is a common year.\n", year);
    }
    return 0;
}

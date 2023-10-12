//
// Created by 赵政杰 on 2021/11/8.
//
//控制程序流：use return instead of break.
//function declaration (声明） function definition (定义）
#include <stdio.h>

int IsPrime(int number) ;

int main() {
    int max = 0;
    scanf("%d", &max);

    for (int number = 2; number <= max; number++) {
        if (IsPrime(number)) {
            printf("%d ", number);
        }
    }

    return 0;
}

// function definition
int IsPrime(int number) {
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}



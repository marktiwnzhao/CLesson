//
// Created by 赵政杰 on 2021/11/8.
//如何保证数组不越界
//
// Created by 赵政杰 on 2021/10/27.
//
#include <stdio.h>
#define MAX 21
char strings[MAX] = " ";

int IsParlindrome (const char str[]);
int main() {
    scanf("%20s", strings);

    if (IsParlindrome(strings)) {
        printf("\"%s\" is a parlindrome.\n", strings);
    } else {
        printf("\"%s\" is not a parlindrome.\n", strings);
    }
    return 0;
}

int IsParlindrome (const char str[]) {
    int len = 0;
    while(strings[len] != '\0') {
        len++;
    }
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] !=str[j]) {
            return 0;
        }
    }
    return 1;
}
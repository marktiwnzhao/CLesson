//
// Created by 赵政杰 on 2021/10/27.
//
#include <stdio.h>
#define MAX 21
char strings[MAX] = " ";
int main() {
    scanf("%20s", strings);//只读进20个字符

    int len = 0;
    while(strings[len] != '\0') {
        len++;
    }

    printf("The length of \"%s\" is %d.\n", strings, len);

    int is_parlindrome = 1;
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (strings[i] != strings[j]) {
            is_parlindrome = 0;
            break;
        }
    }

    printf("\"%s\" is %s a parlindrome.\n", strings, is_parlindrome ? "" : "not");

    return 0;
}

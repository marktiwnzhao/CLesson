//
// Created by 赵政杰 on 2021/11/29.
//
//数组的名字代表数组第一个元素的地址
//可以当做指针来用
//但它不是一个变量，不可以用numbers++;
//将它拷贝到一个变量后，可以用++;
//numbers[i], *(numbers + i), i[numbers](try and die)
//&numbers[i], numbers + i

//char msg[20] = "Hello world";
//msg[0] = 'N';this is OK;
//char *p = "Hello world";
// *p = 'N';Don't!segment fault!
//char *msg;
//(const char *s) == (char const *s)
//(char * const s):指针不可修改


#include <stdio.h>

int StrLen(const char *s);

int main() {
    char msg[20] = "Hello World!";

    printf("The length of the message \"%s\" = %d\n",
           msg, StrLen(msg));

    return 0;
}

int StrLen(const char *s) {
    int len = 0;
    while (*s != '\0') {
        s++;
        len++;
    }

    return len;
}


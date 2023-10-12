//
// Created by 赵政杰 on 2021/11/8.
//
//无返回值 void function
//注释！
#include <stdio.h>

/**
 * Print the character CH of COUNT number
 * @param ch The character to print
 * @param count The number of characters to print
 */
void Print(char ch, int count);

int main() {
    int lines;
    scanf("%d", &lines);

    for (int i = 0; i < lines; i++) {
        Print(' ', lines - (i + 1));
        Print('*', 2 * i + 1);
        Print(' ', lines - (i + 1));

        if (i < lines - 1) {
            printf("\n");
        }
    }

    return 0;
}

void Print(char ch, int count) {
    for (int i = 0; i < count; i++) {
        printf("%c", ch);
    }
}
//
// Created by 赵政杰 on 2021/11/22.
//
/**
 * Data Types
 * Signed:short int, int, long, long long
 * Unsigned:bool(stdbool.h), unsigned short int, unsigned int, unsigned long, unsigned long long
 * 不要混用
 *
 * char(unsigned/signed):C没有标准
 *
 * 有符号整数运算发生溢出：行为未定义；无符号则有定义
 *
 * Integral Promotion整型提升
 *
 * float y = 5.0F：%f %f
 * double x = 5.0: %lf %f
 * long double z = 5.0L: %Lf
 * Floating-point arithmetic is hard(《C标准库》）
 *
 * underflow与overflow
 * 精度丢失：越小，double表示更稠密；越大越稀疏
 * 0.1无法用二进制表示
 * DBL_MAX与DBL_MAX - 100 在计算机中表示同一个数
 * 不要用浮点数作为循环计数器
 */

//pass by value
#include <stdio.h>
void Swap(int left, int right) {
    int tmp = left;
    left = right;
    right = tmp;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    Swap(a, b);
    printf("%d %d", a, b);
    return 0;
}

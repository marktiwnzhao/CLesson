//
// Created by 赵政杰 on 2021/10/23.
//&:address-of operator
//%d：skip the white-spaces, then identify an integer    abc123:乱码; 1234abc:1234
//成功输入一个：则返回值+1 count = scanf (······)：the number of matched items
//%lf:skip the white-spaces, then identify a floating-point number and assign it to a variable of double type
//float:%f
//对于printf，double用%f
#include <stdio.h>
int main(){
  // char m[4];
  // char n;
   // scanf("%3s %c", m, &n);
   // printf("%s\nwill = %c", m, n);
    //int a, b;
    //int conrt = scanf("%d-%d", &a, &b);
    //printf("conrt = %d", conrt);

    char strings[5];
    scanf("%s", strings);
    char c[3];
    scanf("%s", c);
    printf("%s ", strings);
    printf("%c\n", c[0]);

    return 0;
}

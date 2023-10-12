//
// Created by 赵政杰 on 2021/10/18.
//
#include <stdio.h>
int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d%d%d", &a, &b, &c);

    int min;

      if (a >= b) {
          if  (b >= c) {
            min = c;
        } else {
            min = b;
        }
    } else {
          if (a >= c) {
            min = c;
        } else {
            min = a;
        }
    }








    printf("min{%d, %d, %d} = %d",a,b,c,min);
    return 0;
}

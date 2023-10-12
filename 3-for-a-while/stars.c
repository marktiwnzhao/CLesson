//
// Created by 赵政杰 on 2021/10/25.
//c语言有效数字最后一位为0，会自动省去
#include <stdio.h>
int main(){
  int rows = 0;
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
      for (int j = 1; j <= rows - i; j++) {
        printf(" ");
        }

      for (int j = 1; j <= 2 * i - 1; j++) {
        printf("*");
      }

      for (int j = 1; j <= rows - i; j++) {
        printf(" ");
      }

      if (i != rows) {
          printf("\n");
      }
    }
  return 0;
}



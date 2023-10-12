//
// Created by 赵政杰 on 2021/10/11.
//
#include <stdio.h>
#include <math.h>
int main ()
{
    const double PI = 3.1415926;
    int radius = 100;
    double surface_area = 4 * PI * pow(radius,2);
    double volume = 4.0 / 3 * PI * pow(radius,3);
    printf("%-15.4f : surface_area\n%-15.4f : volume\n",surface_area,volume);
    return 0;
}

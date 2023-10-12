#include <stdio.h>

//
// Created by 赵政杰 on 2021/10/11.
//
int main()
{
    const double MOL = 6.02e23;
    double  quantity = 6 / 32.0 *MOL;
    printf("%.3e\n%.5g\n",quantity,quantity);
    return 0;


}

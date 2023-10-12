//
// Created by 赵政杰 on 2021/9/27.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
 {
    int high=100;
    int number_of_tries=7;
    printf("Let us play the \"Guess the Number\"game.\n"
                  "The computer will generate a random number (r) between 1 and %d.\n"
                  "You have %d tries\n",high,number_of_tries);
    printf("Please input your guess.\n");
    srand (time(NULL));
    int r = rand()%high + 1;
    //printf("r = %d\n",r);
    while(number_of_tries > 0)
    {
        printf("You still have %d tries.\n",number_of_tries);
        number_of_tries--;
        int guess;
        scanf("%d",&guess);
        if(guess == r)
        {
            printf("Congs! You win!\n");
            break;
        }
        else if(guess > r)
        {
            printf("guess > r.\n");
        }
        else if(guess < r)
        {
            printf("guess < r.\n");
        }

    }
    return 0;
}

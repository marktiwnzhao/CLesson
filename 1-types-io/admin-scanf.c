//
// Created by 赵政杰 on 2021/10/23.
//
#include <stdio.h>
#include <math.h>
#include <ctype.h>
int main()
{
    char first_name[5];
    char last_name[3];
    char gender;
    int birth_year;
    int birth_month;
    int birth_day;
    char weekday[10];
    int c_score;
    int music_score;
    int medicine_score;
    double mean; //= (c_score + music_score + medicine_score) / 3.0;
    double standard_deviation; //= sqrt(pow(c_score - mean,2)+ pow(music_score - mean,2) + pow(medicine_score - mean,2));
    int rank;
    scanf("%4s %2s %c %d-%d-%d %9s %d %d %d %d %% %lf %lf",
          first_name, last_name, &gender, &birth_year, &birth_month, &birth_day, weekday,
          &c_score, &music_score, &medicine_score, &rank, &mean, &standard_deviation);
    //%4s:只读取4个字符，为了安全；%s：自动跳过空白符
    //%c:不跳过空白符；一个空格可匹配无数多个空白符（包括0个）
    //普通字符（就用普通字符来匹配），空白符（用一个空格），转换说明符
    //匹配百分号：%%
    printf("%s %s \t %c \n"
           "%.2d-%d-%d,%.3s.\n"
           "C = %d \t Music = %d \t Medicine = %d\n"
           "Mean = %f \t SD = %f \t Top = %d%%\n",
           first_name,last_name, toupper(gender),
           birth_month,birth_day,birth_year,weekday,
           c_score,music_score,medicine_score,
           mean,standard_deviation,rank);

    return 0;



}


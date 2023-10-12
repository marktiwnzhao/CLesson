//
// Created by 赵政杰 on 2021/12/13.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct musician {
    char *name;
    char gender;
    char *album;
    int c_score;
    int java_score;
    int python_score;
} Musician;

void PrintMusician(Musician *m);

int main() {
    Musician luo = {
            "Luo Dayou",
            'M',
            "之乎者也",
            0, 10, 20
    };

    Musician cui = {
            .name = "Cui Jian",
            .gender = 'M',
            .album = "新长征路上的摇滚",
            .c_score = 10, .java_score = 20, .python_score = 30
    };

}

//传指针以提高效率，但不能用点，用(*m).或m->
void PrintMusician(Musician *m) {
    printf("%s\n%c\n%s\n%d\t%d\t%d\n",
           m->name, // shortcut for (*m).name
           m->gender,
           m->album,
           m->c_score,
           m->java_score,
           m->python_score);
}

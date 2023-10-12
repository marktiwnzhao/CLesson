/*
 * File:echo.c
 */

#include <stdio.h>

/**
 *
 * @param argc argument count
 * @param argv argument vector
 * @return
 * By convention, argv[0] is the name of the program. If not, argv[0] = NULL
 * By the C standard, argv[argc] is NULL.
 */
int main(int argc, char *argv[]) {
    //printf("argc = %d\n", argc);
    for (int i = 1; i < argc; i++) {
        printf("%s%s", argv[i], (i < argc - 1) ? " " : "");
    }
    printf("\n");

    while (--argc > 0) {
        printf("%s%s", *++argv, (argc > 1) ? " " : "");
    }
    printf("\n");


    /**
     * use an expression as the format argument of print.
     */
    while (--argc > 0) {
        printf((argc > 1) ? "%s " : "%s", *++argv);
    }
    printf("\n");

    return 0;
}


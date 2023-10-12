//
// Created by 赵政杰 on 2021/11/8.
//
//要写注释
//actual argument
//pass by value 实参拷贝给形参 数组给的是地址，所以可以函数改变；其他的为副本，修改不是在原值上改变
#include <stdio.h>

#define MAX 20
int numbers[MAX] = {0};

void SelectionSort(int arr[], int len);
void Swap(int left, int right);

int main() {
    /**
     * Input the array
     * Note: fails to run this program in "Run" (Ctrl + D)
     * See: https://youtrack.jetbrains.com/issue/CPP-5704
     * Use "Terminal" instead.
     */
    int len = -1;
    while (scanf("%d", &numbers[++len]) != EOF);

    SelectionSort(numbers, len);

    printf("\n");
    for (int i = 0; i < len; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

void SelectionSort(int arr[], int len) {
    for (int i = 0; i < len; ++i) {
        int min = arr[i];
        int min_index = i;

        for (int j = i + 1; j < len; j++) {
            if (min > arr[j]) {
                min = arr[j];
                min_index = j;
            }
        }

        /**
         * swap numbers[i] and numbers[min_index]
         */
        int tmp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = tmp;
        // actual argument
        // pass by value
        //    Swap(numbers[i], numbers[min_index]);
//不起作用
    }
}

void Swap(int left, int right) {
    int tmp = left;
    left = right;
    right = tmp;
}
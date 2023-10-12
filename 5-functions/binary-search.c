//
// Created by 赵政杰 on 2021/11/8.
//不要跑到数组以外：undefined behavior
//调用数组直接写名字
//不想被修改const！

#include <stdio.h>

#define LEN 10
int dictionary[LEN] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};

int BinarySearch(int key, const int dict[], int len);

int main() {
    int key = 0;
    scanf("%d", &key);

    int index = BinarySearch(key, dictionary, LEN);

    if (index == -1) {
        printf("Not found!\n");
    } else {
        printf("The index of %d is %d.\n", key, index);
    }

    return 0;
}

int BinarySearch(int key, const int dict[], int len) {
    int low = 0;
    int high = len - 1;
    int mid = 0;
    while (low <= high) {
        mid = (low + high) / 2;
        if (key < dict[mid]) {
            high = mid - 1;
        } else if (key > dict[mid]) {
            low = mid + 1;
        } else {
            return mid;
        }
    }

    return -1;
}
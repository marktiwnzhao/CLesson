//<stdlib.h>
//int *numbers = (int *) malloc(len * sizeof（int））
//malloc返回申请到内存的首地址
//malloc返回值是void，要强制类型转换
//简化：int *numbers = malloc(len * sizeof(*numbers))
//直接把它当成一个数组
// for (int i = 0; i < len; i++) {
// scanf("%d", &numbers[i]);
//}
/**
 * malloc申请失败
 * if (numbers == NULL) {
 * printf("Error!\n");
 *
 * free(numbers);把内存空间还回去，有且只有malloc得到的空间必须free
 * 申请的空间在堆（heap）中
 * calloc:申请并赋0；
 * realloc:扩大空间
*/
#include <stdio.h>
#include <stdlib.h>

void SelectionSort(int arr[], int len);
void Swap(int *left, int *right);

int main() {
    /**
     * Input the array
     * Note: fails to run this program in "Run" (Ctrl + D)
     * See: https://youtrack.jetbrains.com/issue/CPP-5704
     * Use "Terminal" instead.
     */
    int len = 0;
    printf("Please enter the number of the array.\n");
    scanf("%d", &len);

    int *numbers = calloc(len, sizeof(*numbers));

    printf("Please enter %d integers.\n", len);

    for (int i = 0; i < len; i++) {
        scanf("%d", &numbers[i]);
    }

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

        Swap(&arr[i], &arr[min_index]);
    }
}

void Swap(int *left, int *right) {
    int tmp = *left;
    *left = *right;
    *right = tmp;
}
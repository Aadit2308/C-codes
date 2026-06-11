#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int a[], int size) {

    for(int i = 0; i < size - 1; i++) {

        int smallest = i;

        for(int j = i + 1; j < size; j++) {
            if(a[j] < a[smallest]) {
                smallest = j;
            }
        }

        swap(&a[i], &a[smallest]);
    }
}

void print(int a[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
}

int main() {

    int a[] = {1,4,22,12,40};
    int size = sizeof(a) / sizeof(a[0]);

    sort(a, size);

    print(a, size);

    printf("\nMedian = %d", a[size/2]);

    return 0;
}
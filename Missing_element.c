//Missing element of AP?

#include <stdio.h>

int findMissing(int a[], int size) {

    int d = (a[size - 1] - a[0]) / size;

    for(int i = 0; i < size - 1; i++) {

        if(a[i + 1] - a[i] != d) {
            return a[i] + d;
        }
    }

    return -1;
}

int main() {

    int a[] = {2, 4, 6, 10, 12};
    int size = sizeof(a) / sizeof(a[0]);

    printf("Missing element = %d\n", findMissing(a, size));

    return 0;
}
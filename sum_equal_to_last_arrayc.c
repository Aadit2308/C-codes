//Given an array arr. Determine if there exists an element in the array such that the sum of the elements on its left is equal to the sum of the elements on its right.
#include <stdio.h>

int arr(int a[], int size) {

    for(int i = 0; i < size - 1; i++) {
        for(int j = i + 1; j < size - 1; j++) {

            if(a[i] + a[j] == a[size - 1]) {
                return 1;
            }

        }
    }

    return 0;
}

int main() {

    int a[4] = {1,2,3,4};

    printf("%d\n", arr(a, 4));

    return 0;
}
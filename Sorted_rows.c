#include <stdio.h>

int main() {
    int a[3][3] = {
        {0, 1, 2},
        {4, 5, 6},
        {7, 8, 9}
    };

    int count = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {   // was j < 3
            if(a[i][j] > a[i][j+1]) {
                count++;
            }
        }
    }

    if(count == 0) {   // was count == 3
        printf("Sorted");
    } else {
        printf("Not Sorted");
    }

    return 0;
}
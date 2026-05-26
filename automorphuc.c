#include <stdio.h>

int main() {

    int n = 25;

    int square = n * n;

    int temp = n;

    while(temp > 0) {

        if(temp % 10 != square % 10) {

            printf("Not Automorphic");

            return 0;
        }

        temp = temp / 10;

        square = square / 10;
    }

    printf("Automorphic Number");

    return 0;
}
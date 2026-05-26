#include <stdio.h>

int main() {

    int binary = 1101;

    int decimal = 0;

    int base = 1;

    int digit;

    while(binary > 0) {

        digit = binary % 10;

        decimal = decimal + digit * base;

        base = base * 2;

        binary = binary / 10;
    }

    printf("%d", decimal);

    return 0;
}
#include <stdio.h>

int main() {

    int digit;

    int n = 150063;

    int sum = 0;

    while(n > 0) {

        digit = n % 10;

        if(digit == 0) {
            digit = 1;
        }

        sum = sum * 10 + digit;

        n = n / 10;
    }

    int m;

    int num = sum;

    int rev = 0;

    while(num > 0) {

        m = num % 10;

        rev = 10 * rev + m;

        num = num / 10;
    }

    printf("%d", rev);

    return 0;
}
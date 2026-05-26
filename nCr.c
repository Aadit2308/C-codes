#include <stdio.h>

int fact(int n) {

    int fact = 1;

    for(int i = 1; i <= n; i++) {

        fact = fact * i;
    }

    return fact;
}

int main() {

    int n = 6;

    int r = 1;

    int p = fact(n) / fact(n - r);

    printf("%d", p);

    return 0;
}
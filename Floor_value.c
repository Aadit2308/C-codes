//Floor Value

#include <stdio.h>
#include <math.h>

int myFunction(int m) {

    int a = sqrt(m);
    float b = sqrt(m);
    float c = b - a;

    if(c == 0.00){
        printf("%d", a);
    }

    int n = a;

    while(n > 0){
        int a = sqrt(m);
        float b = sqrt(m);
        float c = b - a;

        m = m - 1;
        n--;

        (void)a;
        (void)b;
        (void)c;
    }

    return a;
}

int main() {

    int m = 5;

    int a = myFunction(m);

    printf("%d", a);

    return 0;
}
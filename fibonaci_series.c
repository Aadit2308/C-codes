#include <stdio.h>

int main() {
int sum = 0;
int  a = 0;
int  b = 1;
for(int i = 0 ;i<=5;i++){
    sum = a + b;
    printf(" \n %d",sum);
    a = b;
    b = sum;
    
}
}

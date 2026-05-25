#include <stdio.h>

int main() {
    // Write C code here
    int number = 1024;
    int sum = 0;
    printf("%d",number);
    while(number>0){
    sum = sum + number%10;
    number = number/10;
    printf(" \n%d",number);
    }
printf("\n The sum of digits is: %d",sum);
    return 0;
}

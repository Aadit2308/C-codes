#include <stdio.h>

int main() {
int num = 1331;
int org = num;
int sum = 0;
while(num>0){
    int digit = num % 10;
    sum = sum + digit * digit * digit;
    num = num / 10;
}
printf("%d",sum);

if(sum == org){
    printf(" \n Armstrong number");
}
else{
    printf(" \n Not a Armstrong number");
}

}

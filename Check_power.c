//check for power
#include<stdio.h>
#include <math.h>
#include <stdbool.h>

bool power(int a,int b){
     for(int i = 0;i<=b;i++){
        int ans = pow(a,i);
        if(ans == b){
           return true;
        }
     }
   return false;
}

int main() {

    if(power(2, 9))
        printf("True");
    else
        printf("False");

    return 0;
}
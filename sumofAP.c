//Problem Statement: Given an A.P. Series, we need to find the sum of the Series.

#include <stdio.h>

int main(){
 
    int n = 4;
    int a = 2; 
    int d = 2; //comman diffrence
    int sum = 0
    for(int i = 0;i<n;i=i+d)(
        sum = sum +a;
        a = a + d;   
    )

printf("%d",sum);
}
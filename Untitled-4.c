#include<stdio.h>

int main(){

    int a[5] = {1,2,3,4,5};
    int sum = 0;
    int b[5];

    for(int i = 0;i<5;i++){
        sum = sum + a[i];
        b[i] = sum;
        //printf("%d",sum);

    }

    for(int i = 0;i<5;i++){
        printf(" %d ",b[i]);
    }

}
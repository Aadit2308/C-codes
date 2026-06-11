//Nth Fibonnaci Last Digit

#include<stdio.h>

int series(int n){
    int a = 0;
    int b = 1;
    int sum = 0;
    int last;
    for(int i = 1;i<=n;i++){
        sum = a + b;
        printf("\n%d",sum);
        a = b;
        b = sum;
        if(i == n){
            last = sum;
           
        }
    }
    
    return last;
}

int main(){
    int last =series(15);
     printf("\n%d",last);
     int num = last%10;
     printf("\n%d",num);
}
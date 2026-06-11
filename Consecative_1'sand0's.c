#include<stdio.h>

int main(){
    int a[5] ={1,0,1,1,0};
    int count = 0;
    for(int i = 0;i<4;i++){
        if(a[i] ==1 && a[i+1] == 1 ){
            count++;
        }else if(a[i] ==0 && a[i+1] == 0 ){
            count++;
        }
    }
    printf("%d",count);
} 
//Find nth root of m
#include<stdio.h>
#include <math.h>

int root(int a,int b){
    for(int i = 1;i<=b;i++){
        if(b == pow(i,a)){
            return i;
        }
    }
    return -1;
}

int main(){
    int ans  = root(3,8);
    printf("%d",ans);
}
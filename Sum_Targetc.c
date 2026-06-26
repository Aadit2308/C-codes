

#include <stdio.h>

bool Sum(int a[],int size,int tar){
    int count;
    for(int i = 0;i<size-1;i++){
        for(int j = i+1;j<size;j++){
            if(a[i]+a[j] == tar){
              count++;
            }
            if(count>=1){
            return true;
            }
        }
    }
}

int main(){
    int a[5] = {1,2,3,4,5};
    bool count = Sum(a,5,5);
    printf("%b",count);
}
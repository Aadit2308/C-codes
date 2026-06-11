#include<stdio.h>

int prime(int n){

    for(int i = 2; i <= n; i++){

        int count = 0;

        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                count++;
            }
        }

        if(count == 2){
            printf("%d\n", i);
        }
    }
}

int main(){
    prime(15);
}
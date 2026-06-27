#include <stdio.h>
#include <string.h>
#include <stdbool.h>


void merge(char x[],char y[]){
    int size1 = strlen(x);
    int size2 = strlen(y);
    int z[size1+size2];
    int size = size1+size2;
    for(int i = 0;i<size1;i++){
        z[i] = x[i];
    }
    
        for(int i = 0;i<size2;i++){
        z[size1+i] = y[i];
    }
    
        for(int i = 0;i<size;i++){
         printf("%c",z[i]);
    }
} 
    

int main(){
    merge("Adt","aaa");
    
}
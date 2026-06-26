//concentrate array with reverse

#include<stdio.h>

int myfun(int a[] , int size){

    int b[2*size];

    for(int i = 0;i<size-1;i++){
        b[i] == a[i];
    }

    for(int i = size;i<2*size-1;i++){

        b[i] = a[size-1];
    }

    for(int i = 0;i<2*size-1;i++){
        printf("%d",b[i]);
    }

}

int main(){

    int a[5] = {1,2,3,4,5};
    myfun(a,5);

}
#include <stdio.h>

void Product(int a[], int size){

    int b[size];

    for(int i = 0; i < size; i++){

        int product = 1;

        for(int j = 0; j < size; j++){

            if(i != j){
                product *= a[j];
            }
        }

        b[i] = product;
    }

    for(int i = 0; i < size; i++){
        printf("%d ", b[i]);
    }
}

int main(){

    int a[] = {10, 3, 5, 6, 2};
    int size = sizeof(a) / sizeof(a[0]);

    Product(a, size);

    return 0;
}
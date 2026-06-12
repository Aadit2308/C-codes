//Check for Duplicates
#include<stdio.h>

bool RemoveDuplicates(int a[], int size){

    for(int i = 0; i < size - 1; i++){

        for(int j = i + 1; j < size; j++){

            if(a[i] == a[j]){
             
                return true;

        }
    }

    return false;
}

int main(){

    int a[] = {1, 2, 3, 2, 4, 1, 5};
    int size = sizeof(a) / sizeof(a[0]);

    printf("%b",RemoveDuplicates(a, size));


    return 0;
}
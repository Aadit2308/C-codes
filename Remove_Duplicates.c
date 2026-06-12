#include<stdio.h>

int RemoveDuplicates(int a[], int size){

    for(int i = 0; i < size - 1; i++){

        for(int j = i + 1; j < size; j++){

            if(a[i] == a[j]){

                for(int k = j; k < size - 1; k++){
                    a[k] = a[k + 1];
                }

                size--;
                j--;
            }
        }
    }

    return size;
}

int main(){

    int a[] = {1, 2, 3, 2, 4, 1, 5};
    int size = sizeof(a) / sizeof(a[0]);

    size = RemoveDuplicates(a, size);

    for(int i = 0; i < size; i++){
        printf("%d ", a[i]);
    }

    return 0;
}
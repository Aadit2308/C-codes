//Given an unsorted array arr[]. Find the count of elements less than or equal to the given element x.

#include <stdio.h>

int Count(int a[],int size,int n){
    int count = 0;
    for(int i = 0;i<size-1;i++){
        if(a[i] <= n){
            count++;
        }
    }

    return count;
}

int main() {
    // Write C code here
    int a[5] = {1,3,6,9,10};
    int b = Count(a,5,4);
    printf("%d",b);

    return 0;
}
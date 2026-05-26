//program to rotate array
//[1,2,3,4]
//[4,1,2,3]

#include <stdio.h>

int main(){
    
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);  
    printf("%d",n);
    int last = arr[n-1];
    for(int i = n-1;i>0;i++){
        arr[i] = arr[i-1];
    }
    
    a[0] = last;
     for(int i = 0;i<n;i++){
       printf("%d",arr[i]);
    }
}
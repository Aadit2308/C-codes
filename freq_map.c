
#include <stdio.h>

int main() {
    int a[] = {1,2,3,3,4,4,4,5,5};
    int size = sizeof(a)/sizeof(a[0]);
    int freq[100] = {0};
    
    for(int i = 0 ;i<size; i++){
        freq[a[i]]++;
    }
    
    for(int i = 0;i<100;i++){
        if(freq[i]>1){
        printf("\n %d -> %d",i,freq[i]);
        }
    }

    return 0;
}
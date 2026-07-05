// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int a[] = {1,2,3,4,5};
    int size = sizeof(a)/sizeof(a[0]);
    int b[size];
    for(int i = 0; i<size; i++ ){
       b[i] = 1;
      for(int j = 0;j<size;j++){  
       
        if(i != j){
            b[i] *= a[j];
        }
      }
    }
    
    for(int i = 0;i<size;i++ ){
        printf(" %d ",b[i]);
    }

    return 0;
}

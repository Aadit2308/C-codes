//Missing number

#include<stdio.h>

int swap(int *a,int *b){
       int temp = *a;
       *a = *b;
       *b = temp;
}

int main(){
    int a[4] = {2,3,1,5};
    for(int i = 0;i<4;i++){
        for(int j = 0; j<4;j++){
            if(a[j] > a[j+1]){
                swap(&a[j],&a[j+1]);
            }
        }
    }

    for(int i = 0;i<5;i++){
        printf("%d ",a[i]);
    }
    
       for(int i = 0; i < 4; i++) {
        if(a[i] != i + 1) {
            printf("Missing Number = %d", i + 1);
            return 0;
        }
    }

}
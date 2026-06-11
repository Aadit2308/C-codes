//Replace number by rank
#include <stdio.h>

int replace(int a[],int size){
    int rank[size];
    for(int i = 0; i<size;i++){
        int r = 0;
        for(int j = 0;j<size;j++){
            if(a[j]<a[i]){
                r++;
            }
        }
        rank[i] = r;
    }
     for(int i = 0; i < size; i++) {
        printf("%d ", rank[i]);
    }
}


int main(){
    int a[5] = {10,20,230,40,50};
    replace(a,5);
    
}
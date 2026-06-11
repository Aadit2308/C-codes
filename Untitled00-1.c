

#include <stdio.h>

int main(){

    int a[]  = {1,2,3,4};
    int sum = 5;
    int my = 0;
    printf("%d",sizeof(a)); 
    int s = sizeof(a);
    for(int i = 0;i<s;i++){
        if(sum <= my){
            printf("%d",a);
        }else{
            my = my + a[i];
        }
    }
    
}

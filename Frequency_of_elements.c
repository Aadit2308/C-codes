//Consecative element
#include<stdio.h>

int main(){
    int a[5] ={1,1,3,3,1};
    int count = 0;
    for(int i = 0; i < 5;i++){
        for(int j = i+1; j < 5;j++ ){
            printf("\n%d %d",a[i],a[j]);
            if(a[i] == a[j]){
                count++;
            }
        }
    }
    printf("\n %d",count);
}
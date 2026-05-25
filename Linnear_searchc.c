#include <stdio.h>

int main() {

int n = 3;
int a[5]={1,2,5,4,3};
for(int i = 1;i<5;i++){
    if(a[i]==n){
        printf("The element found at %d",i+1);
    }
}

} 
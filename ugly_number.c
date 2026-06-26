// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

bool ugly(int n){
    int count = 0;
    if(n%2==0 ){
        count++;
    }
    if(n%3==0 ){
        count++;
    }
    if(n%7==0 ){
        count++;
    }
    
    if(count>0){
        return true;
    }
    else{
        return false;
    }
}

int main() {
   bool x = ugly(15);
   printf("%b",x);

    return 0;
}
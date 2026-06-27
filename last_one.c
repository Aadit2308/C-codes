// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int ones(char a[]){
    int size = strlen(a);
    int i = size;
    while(i != 0){
        if(a[i]== '1'){
            
            return i+1;
        
    }
     i--;
    
    }
    return -1;
}


int main() {
    
    char a[] ="000100100100" ;
    
    
    int x = ones(a);
    printf("The last 1 is at %d:",x);
    

}
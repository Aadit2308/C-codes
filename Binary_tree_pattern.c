#include <stdio.h>

int main() {
//int a = 1;
    for(int i = 0; i <= 4; i++) {
    
        for(int j = 0; j <= i; j++) {
            
        if(j%2 == 0){
            printf("%d",0);
        }else{
           printf("%d",1); 
        }
           
        }
        printf("\n");
    }

    return 0;
}
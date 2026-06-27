#include <stdio.h>
#include <string.h>
#include <stdbool.h>


void lower(char x[]) {
    int size = strlen(x);

for(int i = 0;i<size;i++){
     if(x[i]>='A' && x[i]<='Z'){
    printf("%c",x[i]+32);
     }
     else{
        printf("%c",x[i]); 
     }
    
}

 printf("\n");
 


}
    

int main(){
    lower("Adtfrd");
    
}
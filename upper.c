#include <stdio.h>
#include <string.h>
#include <stdbool.h>


void upper(char x[]) {
    int size = strlen(x);

for(int i = 0;i<size-1;i++){
     if(x[i]>='a' && x[i]<='z'){
    printf("%c",x[i]-32);
     }
     else{
        printf("%c",x[i]); 
     }
    
}

 printf("\n");
 
 for(int i = 0;i<size-1;i++){
   printf(" %d ",x[i]-32);
}

}
    

int main(){
    upper("Adtfrd");
    
}
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


void check(char x[]){
   int i = 0; 
   int v=0;
   int c=0;
   while(x[i] !='\0'){
       if(x[i] == 'a'||x[i] =='e'||x[i] =='i'||x[i] =='o'||x[i] =='u'){
           v++;
       }
       else{
           c++;
       }
       i++;
   }
   
   //printf("%d %d",v,c);
   if(c>=3 && v>=5){
       printf("Bad");
}else{
    printf("good");
}
} 


int main(){
    check("aeiccccou");
    
}
#include <stdio.h>

int main() {

    for(int i = 0; i <= 6; i++) {

        for(int j = 0; j <= 6; j++) {
          if(i==3 || j==3){
              printf("*");
          }else{
              printf("#");
          }
           
        }
        printf("\n");
    }

    return 0;
}
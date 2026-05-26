// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   int n = scanf("&d",&n);
   
  for(int i = 1;i<=n;i++){
      for(int j = 1;j<=i-1;j++){
         printf("*");
      }
      printf("\n");
  }

    return 0;
}
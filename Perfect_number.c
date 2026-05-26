//A perfect number is defined as a number that is the sum of its proper divisors ( all its positive divisors excluding itself).
#include <stdio.h>


int main() {
 int sum = 0;
 int d;
 int n = 125;
 for(int i = 0;i<n;i++){
    if(n%i == 0){
        sum = sum + i;
    }
 }
  printf("%d",sum);
}
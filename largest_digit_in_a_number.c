#include <stdio.h>

int main() {

    int num = 192231;
    int larg = 0;

    int reverse = 0;

    while(num > 0) {

        int digit = num % 10;
        if(digit>larg){
            larg = digit;
        }
        
        num = num / 10;
    }
   printf("%d",larg);
 
    return 0;
}

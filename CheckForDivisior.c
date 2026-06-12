//3 divisor:There is only one number 4 which has exactly three divisors 1, 2 and 4 and less than equal to 6.

#include<stdio.h>
int CheckForDivisor(int a[],int size){

    for(int i = 0;i<size;i++){
        for(int j = 1;j<=a[i];j++){
            if(a[i]%j == 0){
                printf(" %d ",j);
            }
        }
        printf("\n");
    }

}

int main(){
    int x[3] = {4,6,12};
    CheckForDivisor(x,3);
}
#include <stdio.h>

int main() {
    int n = scanf("%d",&n);
    for(int i = 0; i <= 10; i++) {

        for(int j = 0; j <= i; j++) {
            if(i%2 == 0){
            printf(" %c ",j+65);
            }
            else{
                printf(" %d ",j);
            }
        }

        printf("\n");
    }

    return 0;
}
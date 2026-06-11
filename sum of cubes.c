//Given a positive integer n, count all pairs of ‘a’(>=1) and ‘b’(>=0) that satisfy the condition a3 + b3 = n.
#include<stdio.h>
#include <math.h>


int cubes(int n){
    int count = 0;
    for(int i = 1;i<n;i++){
        for(int j = 0;j<n;j++)
        if(pow(i,3) + pow(j,3) == n){
            count++;
        }
    }

    return count;

}

int main(){
    int a = cubes(1729);
    printf("%d",a);
}
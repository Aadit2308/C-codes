#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void check(char x[]) {
    int size = strlen(x);
    int y[size];

    for (int i = 0; i < size; i++) {
        y[i] = x[i];
    }

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (y[j] < y[j + 1]) {
                swap(&y[j], &y[j + 1]);
            }
        }
    }

    for (int i = 0; i < size; i++) {
        printf("%c", y[i]);
    }
}

int main(){
    check("adtf/rd");
    
}
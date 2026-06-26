#include <stdio.h>
#include <stdlib.h>

int Distance(int a[], int size, int n, int b) {
    int minDis = size + 1;

    for(int i = 0; i < size - 1; i++) {
        for(int j = i + 1; j < size; j++) {

            if((a[i] == n && a[j] == b) ||
               (a[i] == b && a[j] == n)) {

                int dis = abs(i - j);

                if(dis < minDis)
                    minDis = dis;
            }
        }
    }

    if(minDis == size + 1)
        return -1;   

    return minDis;
}

int main() {
    int a[] = {1, 7, 1, 4};

    printf("%d", Distance(a, 4, 1, 4));
}
#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,4,4,5,6};
    int target = 4;

    int n = sizeof(arr) / sizeof(arr[0]);

    int low = 0, high = n - 1;
    int ans = -1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == target) {
            ans = mid;      // store current occurrence
            high = mid - 1; // search left for an earlier one
        }
        else if(arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    printf("%d\n", ans);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;

    printf("Enter number of elements: ");
    scanf("%d", &num);

    int *grades = malloc(num * sizeof(int));

    if (grades == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input
    printf("Enter %d numbers:\n", num);
    for (int i = 0; i < num; i++) {
        scanf("%d", &grades[i]);
    }

    // Output
    printf("Array elements are:\n");
    for (int i = 0; i < num; i++) {
        printf("%d ", grades[i]);
    }

    printf("\n");

    free(grades);
    grades = NULL;

    return 0;
}
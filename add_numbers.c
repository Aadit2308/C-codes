#include <stdio.h>

int main() {
    double num1, num2, sum;

    // Ask user for input
    printf("Enter first number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%lf", &num2) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Calculate sum
    sum = num1 + num2;

    // Print the result
    printf("The sum of %.2f and %.2f is %.2f\n", num1, num2, sum);

    return 0;
}

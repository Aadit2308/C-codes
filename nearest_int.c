#include <stdio.h>
#include <string.h>

void roundTo10(char s[]) {
    int n = strlen(s);
    int last = s[n - 1] - '0';

    if (last <= 5) {
        s[n - 1] = '0';
    } else {
        int i = n - 1;

        // Set last digit to 0
        s[i] = '0';
        i--;

        // Carry
        while (i >= 0 && s[i] == '9') {
            s[i] = '0';
            i--;
        }

        if (i >= 0) {
            s[i]++;
        } else {
            // Example: 999 -> 1000
            printf("1");
        }
    }

    printf("%s\n", s);
}

int main() {
    char s[] = "127";
    roundTo10(s);

    return 0;
}
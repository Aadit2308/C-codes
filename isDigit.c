#include <stdio.h>
#include <string.h>
#include <ctype.h>

int maxNumber(char s[]) {
    int i = 0;
    int max = -1;

    while (s[i] != '\0') {
        if (isdigit(s[i])) {
            int num = 0;

            while (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
                i++;
            }

            if (num > max)
                max = num;
        } else {
            i++;
        }
    }

    return max;
}

int main() {
    char s[] = "ab12cd345ef67";

    printf("%d\n", maxNumber(s));

    return 0;
}
#include <stdio.h>
#include <string.h>

void reverseRange(char s[], int left, int right) {
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

void reverseWords(char s[]) {
    int start = 0;
    int n = strlen(s);

    for (int i = 0; i <= n; i++) {
        if (s[i] == '.' || s[i] == '\0') {
            reverseRange(s, start, i - 1);
            start = i + 1;
        }
    }
}

int main() {
    char s[] = "abc.abc.abc";

    reverseWords(s);

    printf("%s\n", s);

    return 0;
}
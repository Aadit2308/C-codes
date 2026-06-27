#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char s[]){
int left = 0;
int right = strlen(s) - 1;

while (left < right) {
    if (s[left] != s[right]) {
        return 0;
    }
    left++;
    right--;
}
return 1;
}

int main(){
    bool x = isPalindrome("abba");
    printf("%b",x);
}
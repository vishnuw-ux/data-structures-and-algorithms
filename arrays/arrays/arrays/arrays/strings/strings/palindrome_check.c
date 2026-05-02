#include <stdio.h>

/*
Problem:
Check if a string is a palindrome.

Approach:
Compare characters from both ends.

Time Complexity: O(n)
Space Complexity: O(1)
*/

int length(char str[]) {
    int i = 0;
    while (str[i] != '\0') i++;
    return i;
}

int isPalindrome(char str[]) {
    int l = 0, r = length(str) - 1;

    while (l < r) {
        if (str[l] != str[r])
            return 0;
        l++;
        r--;
    }
    return 1;
}

int main() {
    char str[] = "madam";

    if (isPalindrome(str))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}

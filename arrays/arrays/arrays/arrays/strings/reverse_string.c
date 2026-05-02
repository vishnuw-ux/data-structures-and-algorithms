#include <stdio.h>

/*
Problem:
Reverse a string.

Approach:
Swap characters from both ends.

Time Complexity: O(n)
Space Complexity: O(1)
*/

int length(char str[]) {
    int i = 0;
    while (str[i] != '\0') i++;
    return i;
}

void reverse(char str[]) {
    int l = 0, r = length(str) - 1;

    while (l < r) {
        char temp = str[l];
        str[l] = str[r];
        str[r] = temp;
        l++;
        r--;
    }
}

int main() {
    char str[] = "hello";

    reverse(str);
    printf("%s\n", str);

    return 0;
}

#include <stdio.h>
#include <string.h>

/*
Problem:
Longest substring without repeating characters.

Time Complexity: O(n)
*/

int longestUnique(char* str) {
    int visited[256] = {0};
    int start = 0, maxLen = 0;

    for (int end = 0; str[end]; end++) {
        visited[str[end]]++;

        while (visited[str[end]] > 1) {
            visited[str[start]]--;
            start++;
        }

        int len = end - start + 1;
        if (len > maxLen)
            maxLen = len;
    }

    return maxLen;
}

int main() {
    char str[] = "abcabcbb";

    printf("Length: %d\n", longestUnique(str));

    return 0;
}

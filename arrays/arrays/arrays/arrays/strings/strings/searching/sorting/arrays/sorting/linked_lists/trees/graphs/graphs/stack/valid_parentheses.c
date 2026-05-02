#include <stdio.h>
#include <string.h>

#define MAX 100

/*
Problem:
Check if parentheses are valid.

Time Complexity: O(n)
*/

int isValid(char str[]) {
    char stack[MAX];
    int top = -1;

    for (int i = 0; str[i]; i++) {
        if (str[i] == '(')
            stack[++top] = str[i];
        else {
            if (top == -1) return 0;
            top--;
        }
    }

    return top == -1;
}

int main() {
    char str[] = "(())()";

    if (isValid(str))
        printf("Valid\n");
    else
        printf("Invalid\n");

    return 0;
}

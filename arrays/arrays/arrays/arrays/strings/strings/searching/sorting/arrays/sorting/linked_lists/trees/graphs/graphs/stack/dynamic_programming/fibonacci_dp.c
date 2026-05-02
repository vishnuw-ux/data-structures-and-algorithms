#include <stdio.h>

/*
Problem:
Find nth Fibonacci number using DP.

Time Complexity: O(n)
Space Complexity: O(n)
*/

int fib(int n) {
    int dp[n+1];

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}

int main() {
    int n = 10;

    printf("Fibonacci: %d\n", fib(n));

    return 0;
}

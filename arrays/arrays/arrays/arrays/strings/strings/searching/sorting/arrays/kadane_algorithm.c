#include <stdio.h>

/*
Problem:
Find the maximum sum of a contiguous subarray.

Approach:
Use Kadane’s algorithm.

Time Complexity: O(n)
*/

int maxSubarraySum(int arr[], int n) {
    int maxSum = arr[0];
    int current = arr[0];

    for (int i = 1; i < n; i++) {
        if (current + arr[i] > arr[i])
            current = current + arr[i];
        else
            current = arr[i];

        if (current > maxSum)
            maxSum = current;
    }

    return maxSum;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Max Sum: %d\n", maxSubarraySum(arr, n));

    return 0;
}

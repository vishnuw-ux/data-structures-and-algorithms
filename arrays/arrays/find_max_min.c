#include <stdio.h>

/*
Problem:
Find maximum and minimum values in an array.

Approach:
Track max and min while traversing.

Time Complexity: O(n)
Space Complexity: O(1)
*/

void maxMin(int arr[], int n) {
    int max = arr[0], min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    printf("Max: %d\nMin: %d\n", max, min);
}

int main() {
    int arr[] = {8, 2, 10, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    maxMin(arr, n);

    return 0;
}

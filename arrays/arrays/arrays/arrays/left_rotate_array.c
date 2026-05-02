#include <stdio.h>

/*
Problem:
Rotate array left by one position.

Approach:
Shift elements and move first to end.

Time Complexity: O(n)
Space Complexity: O(1)
*/

void rotateLeft(int arr[], int n) {
    int first = arr[0];

    for (int i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];

    arr[n - 1] = first;
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    rotateLeft(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

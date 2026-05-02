#include <stdio.h>

/*
Problem:
Search element in sorted array.

Approach:
Binary search.

Time Complexity: O(log n)
Space Complexity: O(1)
*/

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, n, 7);

    printf("%d\n", result);

    return 0;
}

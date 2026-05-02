#include <stdio.h>

/*
Problem:
Find the index of a given element in an array.

Approach:
Traverse the array and compare each element.

Time Complexity: O(n)
Space Complexity: O(1)
*/

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {4, 7, 1, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 9;

    int result = linearSearch(arr, n, key);

    if (result != -1)
        printf("Found at index %d\n", result);
    else
        printf("Not found\n");

    return 0;
}

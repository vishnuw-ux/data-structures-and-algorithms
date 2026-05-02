#include <stdio.h>
#include <stdlib.h>

#define CAPACITY 3

/*
Problem:
Design an LRU Cache.

Approach:
Use array (simplified) to track usage.

Time Complexity: O(n)
*/

int cache[CAPACITY];
int size = 0;

void refer(int x) {
    int i;
    for (i = 0; i < size; i++) {
        if (cache[i] == x) break;
    }

    if (i == size) {
        if (size < CAPACITY) size++;
        else {
            for (int j = 1; j < CAPACITY; j++)
                cache[j - 1] = cache[j];
        }
    } else {
        for (int j = i; j < size - 1; j++)
            cache[j] = cache[j + 1];
    }

    cache[size - 1] = x;
}

void display() {
    for (int i = 0; i < size; i++)
        printf("%d ", cache[i]);
    printf("\n");
}

int main() {
    refer(1); refer(2); refer(3);
    refer(1); refer(4); refer(5);

    display();
    return 0;
}

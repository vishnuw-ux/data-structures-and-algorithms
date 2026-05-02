#include <stdio.h>

#define MAX 100

/*
Problem:
Traverse graph using DFS.

Time Complexity: O(V + E)
*/

void dfs(int graph[MAX][MAX], int visited[], int node, int n) {
    visited[node] = 1;
    printf("%d ", node);

    for (int i = 0; i < n; i++) {
        if (graph[node][i] && !visited[i]) {
            dfs(graph, visited, i, n);
        }
    }
}

int main() {
    int n = 4;
    int graph[MAX][MAX] = {
        {0,1,1,0},
        {1,0,0,1},
        {1,0,0,1},
        {0,1,1,0}
    };

    int visited[MAX] = {0};

    dfs(graph, visited, 0, n);

    return 0;
}

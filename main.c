#include <stdio.h>
#include <stdlib.h>

int **initGraph(int n) {
    int **graph = malloc(n* sizeof(int *));

    for (int i = 0; i < n; i++) {
        graph[i] = calloc(n, sizeof(int));
    }
    return graph;
}

void addToGraph(int **graph, int u, int v) {
    graph[u][v] = 1;
    graph[v][u] = 1;
}

void displayGraph(int **graph, int n) {
    printf("\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int n = 3;
    int **graph = initGraph(n);

    int a = 0, b = 1;

    addToGraph(graph, a, b);
    displayGraph(graph, n);

    free(graph);
    return 0;
}
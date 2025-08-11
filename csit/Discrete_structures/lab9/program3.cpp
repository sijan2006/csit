// program to print the actual shortest path, not just the distance.
#include <stdio.h>
#define MAX 10
#define INF 9999

int n;
int graph[MAX][MAX];
int dist[MAX], visited[MAX], parent[MAX];

int minDistance()
{
    int min = INF, min_index = -1;
    for (int v = 0; v < n; v++)
    {
        if (!visited[v] && dist[v] <= min)
        {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

void printPath(int j)
{
    if (parent[j] == -1)
    {
        printf("%d", j);
        return;
    }
    printPath(parent[j]);
    printf(" -> %d", j);
}

void dijkstra(int src)
{
    for (int i = 0; i < n; i++)
    {
        dist[i] = INF;
        visited[i] = 0;
        parent[i] = -1;
    }
    dist[src] = 0;
    for (int count = 0; count < n - 1; count++)
    {
        int u = minDistance();
        visited[u] = 1;
        for (int v = 0; v < n; v++)
        {
            if (!visited[v] && graph[u][v] && dist[u] + graph[u][v] < dist[v])
            {
                dist[v] = dist[u] + graph[u][v];
                parent[v] = u;
            }
        }
    }
}

int main()
{
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix (use 0 if no edge):\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);
    int src;
    printf("Enter source vertex: ");
    scanf("%d", &src);
    dijkstra(src);
    printf("Vertex \t Distance from Source \t Path\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t %d \t\t\t ", i, dist[i]);
        printPath(i);
        printf("\n");
    }
    return 0;
}

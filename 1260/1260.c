#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int graph[1001][1001];
int visited[1001];
int queue[1001];
int front = 0, rear = 0;

void dfs(int v, int n) {
    visited[v] = 1;
    printf("%d ", v);

    for(int i = 1; i <= n; i++) {
        if(graph[v][i] == 1 && visited[i] == 0) {
            dfs(i, n);
        }
    }
}

void bfs(int v, int n) {
    front = rear = 0;
    for(int i = 1; i <= n; i++) visited[i] = 0;

    queue[rear++] = v;
    visited[v] = 1;

    while(front < rear) {
        int cur = queue[front++];
        printf("%d ", cur);

        for(int i = 1; i <= n; i++) {
            if(graph[cur][i] == 1 && visited[i] == 0) {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int n, m, v;
    scanf("%d %d %d", &n, &m, &v);

    //그래프 초기화
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            graph[i][j] = 0;
        }
    }

    //간선 입력
    for(int i = 0; i < m; i++) {
        int d1, d2;
        scanf("%d %d", &d1, &d2);
        graph[d1][d2] = 1;
        graph[d2][d1] = 1;
    }

    //DFS 출력
    dfs(v, n);
    printf("\n");

    //BFS 출력
    bfs(v, n);
    return 0;
}
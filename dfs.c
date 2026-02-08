#include<stdio.h>
int adj[10][10], visited[10], n;
void bfs(int v){
    visited[v]=1;
    printf("%d", v);
    for(int i=0; i<n; i++){
        if(adj[v][i]==1 && !visited[i]){
            dfs(i);
        }
    }
}
int main(){
    int start;
    printf("Enter the number of vertices:\n");
    scanf("%d", &n);
    printf("Enter the adjacency matrix:\n");
    for(int i=0; i<n; i++){
        visited[i]=0;
        for(int j=0; j<n;j++){
            scanf("%d", &adj[i][j]);
        }
    }
    printf("Enter the starting vertex: \n");
    scanf("%d", &start);
    dfs(start);
    return 0;
}

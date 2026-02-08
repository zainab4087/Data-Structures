// Online C compiler to run C program online
#include <stdio.h>
int adj[10][10], visited[10], queue[10];
int front=0, rear=-1,n;
void bfs(int start){
    visited[start]=1;
    queue[++rear]=start;
    while(front<=rear){
        int v = queue[front++];
        printf("%d", v);
        for(int i=0; i<n; i++){
            if(adj[v][i]==1 && !visited[i]){
                visited[i]=1;
                queue[++rear]=i;
            }
        }
    }
}
int main() {
int start;
printf("Enter the number of vertices:");
scanf("%d", &n);
printf("\nEnter Adjacency Matrix: ");
for(int i=0; i<n; i++){
    visited[i]=0;
    for(int j=0; j<n; j++){
        scanf("%d", &adj[i][j]);
    }
}
printf("Enter the starting vertex: ");
scanf("%d", &start);
printf("BFS traversal: ");
bfs(start);
return 0;


    return 0;
}

// Online C compiler to run C program online
#include <stdio.h>
#define MAX 100

int adj[MAX][MAX];
int visited[MAX];
int n;

void dfs(int v) {
   int i;
   visited[v] = 1;
   printf("%d ",v);
   for (i = 0; i < n; i++) {
      if (adj[v][i] == 1 && visited[i] == 0) {
         dfs(i);
      }
   }
}

int main() {
   int i,j;
   printf("Enter number of vertices:");
   scanf("%d",&n);
   printf("\nEnter adjacency matrix:\n");
   for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
         scanf("%d",&adj[i][j]);
      }
   }
   for (i = 0; i < n; i++) {
      visited[i] = 0;
   }
   printf("DFS Traversal: ");
   dfs(0); // Start DFS from vertex 0
   return 0;
}

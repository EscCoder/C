#include <stdio.h>
#define MAX 100

int adj[MAX][MAX];
int visited[MAX];
int queue[MAX];
int front = -1, rear = -1;
int n;

void bfs(int v) 
{
   int i, cur_vertex;
   visited[v] = 1;
   queue[++rear] = v;

   while (front != rear)
   {
      cur_vertex = queue[++front];
      printf("%d ", cur_vertex);

      for (i = 0; i < n; i++)
      {
         if (adj[cur_vertex][i] == 1 && visited[i] == 0) 
         {
            visited[i] = 1;
            queue[++rear] = i;
         }
      }
   }
}

int main() 
{
   int i, j;
   printf("Enter number of vertices:");
   scanf("%d",&n);
   printf("\nEnter adjacency matrix:\n");
   for (i = 0; i < n; i++) 
   {
      for (j = 0; j < n; j++)
      {
         scanf("%d",&adj[i][j]);
      }
   }
   for (i = 0; i < n; i++)
   {
      visited[i] = 0;
   }
   printf("BFS Traversal: ");
   bfs(0); // Start BFS from vertex 0
   return 0;
}

/*In this implementation, queue is used to keep track of the vertices to be explored in BFS, front and rear are used to keep track of the front and rear of the queue.

The bfs function takes a starting vertex v, marks it as visited, enqueues it to the queue and then explores its unvisited adjacent vertices
in a loop until the queue is empty.
The visited array keeps track of the visited vertices.

In the main function, the adjacency matrix is input from the user, the visited array is initialized to 0, and BFS is started from a given vertex entered by the user
*/

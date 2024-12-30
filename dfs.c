#include <stdio.h>
#define MAX 10

int stk[MAX], top = -1, adj[MAX][MAX] = {0}, visted[MAX] = {0}, N;

int read()
{
    printf("\nEnter the number of vertices:\n");
    scanf("%d",&N);
    printf("\nEnter the adjacency matrix:\n");
    for(int i=1;i<=N;i++)
        for(int j=1;j<=N;j++)
            scanf("%d",&adj[i][j]);
    return 1;
}

void display()
{
    printf("Adjacency matrix is:\n");
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }
}
void dfs(int start)
{
    int curV = start;
    visted[curV] = 1;
    printf("%d ", curV);
    stk[++top] = curV;
    while (top!=-1)
    {
        for (int j = 1; j <= N; j++)
        {
            if (adj[curV][j] && !visted[j])
            {
                curV = j;
                printf("%d ", curV);
                stk[++top] = curV;
                visted[curV] = 1;
            }
        }
        curV = stk[--top];
    }
}

int main()
{
    int start;
if(read())
{
    display();
    printf("Enter the starting vertex: ");
    scanf("%d", &start);
    if(start>0 &&start<=N)
      {
        printf("DFS Traversal of the given graph is : \n");
         dfs(start);
     }
    else 
        printf("\n No Such Vertex : ");
}
else
    printf("Invalid size Entery !!!");
    return 0;
}
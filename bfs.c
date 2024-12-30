#include<stdio.h>
#define MAX 10

int adj[MAX][MAX],visited[MAX]={0},N,Q[MAX],F=-1,R=-1;

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

void bfs(int x)
{
    printf("\nBFS\n");
    F=R=1;
    Q[R]=x;
    visited[x]=1;
    printf("%d",x);
    while(F<=R)
    {
        x=Q[F];
        F=F+1;
        for(int j=1;j<=N;j++)
        {
            if(adj[x][j]==1 && visited[j]==0)
            {
                printf("%d",j);
                visited[j]=1;
                R+=1;
                Q[R]=j;
            }
        }
    }
}

int main()
{
    int x;
    read();
    printf("\nEnter the starting vertex:\n");
    scanf("%d",&x);
    bfs(x);
    return 0;
}
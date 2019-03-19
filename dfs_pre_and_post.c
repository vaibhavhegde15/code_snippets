#include<stdio.h>
void DFS(int);
int G[10][10],visited[10],n;    //n is no of vertices and graph is sorted in array G[10][10]
int ans[10][2],counter=1;
int main()
{
    int i,j;
    printf("Enter number of vertices:");
   
    scanf("%d",&n);
 
    //read the adjecency matrix
    printf("\nEnter adjecency matrix of the graph:");
   
    for(i=0;i<n;i++)
       for(j=0;j<n;j++)
            scanf("%d",&G[i][j]);
 
    //visited is initialized to zero
   for(i=0;i<n;i++)
        visited[i]=0;
   for (int i = 0; i < n; i++)
     if (!visited[i])
        DFS(i);
    printf("\nnode:\tpre\tpost\n");
    for(i=0;i<n;i++){
        printf("%d   :\t%d\t%d\n",i,ans[i][0],ans[i][1]);
    }
   return 0;
}
 
void DFS(int i)
{
    int j;
    printf("\n%d",i);
    visited[i]=1;
    ans[i][0]=counter++;
    for(j=0;j<n;j++){
       if(!visited[j]&&G[i][j]==1){
           DFS(j);
       }
    }
    ans[i][1]=counter++;
}

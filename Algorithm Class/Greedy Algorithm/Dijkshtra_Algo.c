// Greedy Algorithm - Dijkshtra  
// single source shortest path algo 

#include<stdio.h>
#include<conio.h>
#define Infinity 999;

int Max = 10;
void Dijkstra(int G[Max][Max],int n,int startnode);
int main(){
    int G[Max][Max],i,j,n,u;
    printf("Enter No of Nodes : ");
    scanf("%d",&n);
    printf("\nEnter Adjacency Matrix : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&G[i][j]);
        }
    }
    printf("Enter Initial Node : ");
    scanf("%d",&u);
    Dijkstra(G,n,u);

    return 0;
}
void Dijkstra(int G[Max][Max],int n,int startnode){
    int cost[Max][Max],distance[Max],pred[Max];
    int visited[Max],count,MinDistance,NextNode,i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(G[i][j]==0){
                cost[i][j] = Infinity;
            }
            else{
                cost[i][j] = G[i][j];
            }
        }
    }
    for(i=0;i<n;i++){
        distance[i] = cost[startnode];
        pred[i] = startnode;
        visited[i] = 0;
    }
    distance[startnode] = 0;
    visited[startnode] = 1;
    count = 1;
    while(count<n-1){
        MinDistance = Infinity;
        for(i=0;i<n;i++){
            if(distance[i]<MinDistance && !visited[i]){
                MinDistance = distance[i];
                NextNode = i;
            }
            visited[NextNode] = 1;
            for(i=0;i<n;i++){
                if(!visited[i]){
                    if(MinDistance+cost[NextNode][i] < distance[i]){
                        distance[i] = MinDistance + cost[NextNode][i];
                        pred[i] = NextNode;
                    }
                }
            }
        }
        count++;
    }
    for(i=0;i<n;i++){
        if(i!=startnode){
            printf("\nDistance of Node : %d = %d ",i,distance[i]);
            printf("\nPath = %d ",i);
            j = i;
            do{
                j = pred[i];
                printf("%d ",j);
            }while(j!=startnode);
        }
    }
}
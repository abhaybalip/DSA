// Dynamic Programming - Bellman Ford Algorithm
// single source shortest path algorithm

#include<stdio.h>
#include<stdlib.h>

int BellmanFord(int DistMat[20][20],int numVertex,int E,int edge[20][2]){
    int i,u,v,k,distance[20],parent[20],s,flag=1;
    for(int i=0;i<numVertex;i++){
        distance[i] = 1000;
        parent[i] = -1;
    }
    printf("Enter Source vertex : ");
    scanf("%d",&s);
    distance[s-1] = 0;
    for(int i=0;i<numVertex-1;i++){
        for(int k=0;k<E;k++){
            u = edge[k][0];
            v = edge[k][1];
            if(distance[u]+DistMat[u][v]<distance[v]){
                distance[v] = distance[u] + DistMat[u][v];
                parent[v] = u;
            }
        }
    }
    for(int k=0;k<E;k++){
        u = edge[k][0];
        v = edge[k][1];
        if(distance[u]+DistMat[u][v]<distance[v]){
            flag = 0;
        }
    }
    if(flag){
        for(int i=0;i<numVertex;i++){
            printf("Vertex : %f cost : %f parent : %f \n",i+1,distance[i],parent[i]+1);
        }
    }
    return flag;
}
int main(){
    int numVertex,edge[20][2],DistMat[20][20],i,j,k=0;
    printf("Enter No of Vertex : ");
    scanf("%d",&numVertex);
    printf("Enter Distance Matrix : \n");
    for(int i=0;i<numVertex;i++){
        for(int j=0;j<numVertex;j++){
            scanf("%d",&DistMat[i][j]);
            if(DistMat[i][j]!=0){
                edge[k][0] = i;
                edge[k++][1] = j;
            }
        }
    }

    if(BellmanFord(DistMat,numVertex,k,edge)){
        printf("No Negative Edges \n");
    }
    else{
        printf("Negative Weight exists \n");
    }

    return 0;
}
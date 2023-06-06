// Branch & Bound Algo - Travelling Salesmen Problem
// 
#include<stdio.h>
#include<stdlib.h>
int least(int);
int DistanceMatrix[10][10],VisitedCity[10],n,cost=0;

void getData(){
    int i,j;
    printf("\nEnter No of Cities : ");
    scanf("%d",&n);
    printf("Enter (%d x %d) Distance Matrix : ",n,n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",DistanceMatrix[i][j]);
        }
        VisitedCity[i] = 0;
    }
}
void minCost(int city){
    int i,ncity;
    VisitedCity[city] = 1;
    printf("%d : ",city+1);
    ncity = least(city);
    if(ncity==999){
        ncity = 0;
        printf("%d",ncity+1);
        cost += DistanceMatrix[city][ncity];
        return ;
    }
    minCost(ncity);
}
int least(int c){
    int i,nc=999;
    int min = 999,kmin;
    for(i=0;i<n;i++){
        if(DistanceMatrix[c][i]!=0 && VisitedCity[i]==0){
            if(DistanceMatrix[c][i]<min){
                min = DistanceMatrix[i][0] + DistanceMatrix[c][i];
                kmin = DistanceMatrix[c][i];
                nc = i;

            }
        }
    }
    if(min!=999){
        cost += kmin;
    }
    return nc;
}
void DisplayPath(){
    printf("\n\nMinimum Cost : %d \n",cost);
}
int main(){
    getData();
    printf("\n\nThe Path is : \n");
    minCost(0);
    DisplayPath();

    return 0;
}
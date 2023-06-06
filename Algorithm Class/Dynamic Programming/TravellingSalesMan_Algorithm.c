// Dynamic Programming - Travelling Salesman Problem
// 

#include<stdio.h>
#include<stdlib.h>

void getDistMat();
void MinCost(int);
int least(int);
int DistMat[10][10],VisitedCity[10],n,cost=0,InitialVertex=0;

int main(){
    getDistMat();
    printf("\n\n Optimal Path : \n");
    MinCost(InitialVertex);
    printf("\n\n Minimum Cost : %d \n",cost);
    return 0;
}
void getDistMat(){
    int i,j;
    printf("Enter No of Cities : ");
    scanf("%d",&n);
    printf("\nEnter Distance Matrix : \n");
    for(int i=0;i<n;i++){
        printf("\nEnter Distance of Row : %d \n",i+1);
        for(int j=0;j<n;j++){
            scanf("%d",&DistMat[i][j]);
        }
        VisitedCity[i] = 0;
    }
    printf("\n\nCost Matrix : ");
    for(int i=0;i<n;i++){
        printf("\n");
        for(int j=0;j<n;j++){
            printf("\t%d",DistMat[i][j]);
        }
    }
}
void MinCost(int city){
    int i,ncity;
    VisitedCity[city] = 1;
    printf("%d : ",city+1);
    ncity = least(city);
    if(ncity==999){
        ncity = 0;
        printf("%d",ncity+1);
        cost += DistMat[city][ncity];
        return;
    }
    MinCost(ncity);
}
int least(int c){
    int i,nc=999;
    int min = 999,kmin;
    for(int i=0;i<n;i++){
        if(DistMat[c][i]!=0 && VisitedCity[i]==0){
            if(DistMat[c][i] + DistMat[i][c] < min){
                min = DistMat[i][0] + DistMat[c][i];
                kmin = DistMat[c][i];
                nc = i;
            }
        }
    }
    if(min!=999){
        cost += kmin;
    }
    return nc;
}
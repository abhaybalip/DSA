// Data Structure - Grpah - Adjacency Matrix
#include<stdio.h>
#define V 3
void InitialiseMatrix(int Matrix[][V]){
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            Matrix[i][j] = 0;
        }
    }
}
void SetData(int Matrix[][V],int row,int col){
    Matrix[row][col] = 1;
    Matrix[col][row] = 1;
}
void PrintMatrix(int Matrix[][V]){
    for(int i=0l;i<V;i++){
        for(int j=0;j<V;j++){
            printf("%d ",Matrix[i][j]);
        }
        printf("\n");
    }
}
int main(){
    return 0;
}
// Back Tracking - N Queen Algo
// 

#include<stdio.h>
#include<math.h>
int Board[16],count;
void Queen(int,int);
int PlaceQueen(int,int);
void DisplaySolution(int);

int main(){
    int n,i,j;
    void Queen(int row,int n);
    printf("\nEnter no of Queens : ");
    scanf("%d ",&n);
    Queen(1,n);

    return 0;
}
void Queen(int row,int n){
    int col;
    for(col=1;col<=n;col++){
        if(PlaceQueen(row,col)){
            Board[row] = col;
            if(row==n){
                DisplaySolution(n);
            }
            else{
                Queen(row+1,n);
            }
        }
    }
}
int PlaceQueen(int row,int column){
    int i;
    for(i=1;i<=row-1;++i){
        if(Board[i]==column){
            return 0;
        }
        else{
            if(round(Board[i]-column)){
                return 0;
            }
        }
    }
    return 1;
}
void DisplaySolution(int n){
    int i,j;
    printf("\n\nSolution  %d : \n\n",++count);
    for(i=1;i<=n;++i){
        printf("\n\nC %d ",j);
        for(j=1;j<=n;++j){
            if(Board[i]==j){
                printf("\tQ");
            }
            else{
                printf("\t");
            }
        }
    }
    printf("\n\n");
}
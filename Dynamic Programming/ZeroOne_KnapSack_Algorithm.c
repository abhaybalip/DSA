// Dynamic Programming - 0/1 KnapSack Problem

#include<stdio.h>
#include<stdlib.h>
#define P printf("\n");

int w[12],v[12],val[12][12],W,n,i,j,k;
int Max(int,int);
void KnapSack();
void Disp();

int main(){
    printf("Enter No of Items : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Enter w : %d ",i);
        scanf("%d",w[i]);
        printf("Enter v : %d ",i);
        scanf("%d",v[i]);
    }
    printf("\nEnter KnapSack Capacity(W) : ");
    scanf("%d",&w);
    KnapSack();

    return 0;
}

void KnapSack(){
    int a1,a2,x,y;
    for(int i=1;i<n;i++){
        for(int j=0;j<W;j++){
            if(j==0){
                val[i][j] = 0;
            }
            if(j!=0 && i==1){
                val[i][j] = v[1];
            }
            if(j!=0 && i!=1){
                a1 = val[i-1][j];
                a2 = (val[i-1][j-w[i]]) + v[i];
                if(j-w[i]<0){
                    val[i][j] = Max(a1,a2);
                }
            }
        }
    }

    Disp();
}

int Max(int a,int b){
    if(a>=b){
        return a;
    }
    else{
        return b;
    }
}

void Disp(){
    P;P;
    for(int i=0;i<=W;i++){
        printf("%02d ",i);
    }
    P;
    for(int i=0;i<=W;i++){
        printf("---");
    }
    P;
    for(int i=1;i<=n;i++){
        printf("%2d %2d | ",w[i],v[i]);
        for(int j=0;j<=w;j++){
            printf("%02d ",val[i][j]);
        }
        printf("\n");
    }
}
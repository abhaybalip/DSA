// BackTraking Algorithm - Sum of subset problem
// 

#include<stdio.h>
#include<stdlib.h>
#define True 1;
#define Flase 0;
int inc[50],w[50],sum,n;
void SumOfSubset(int,int,int);

int Promising(int i,int wt,int total){
    return(
        (wt+total>=sum) && ((wt==sum)||(wt+w[i+1]<=sum))
    );
}
int main(){
    int i,j,n,temp,total=0;
    printf("\nEnter No of Elements in Set : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter No %d : ",i+1);
        scanf("%d",&w[i]);
        total += w[i];
    }
    printf("Enter Sum Value to create subset : ");
    scanf("%d",&sum);
    for(i=0;i<=n;i++){
        for(j=0;j<n-1;j++){
            if(w[j]>w[j+1]){
                temp = w[j];
                w[j] = w[j+1];
                w[j+1] = temp;

            }
        }
    }
    printf("\nElements in Sorted Order : ");
    for(i=0;i<n;i++){
        printf("%d ",w[i]);
    }
    if(total<sum){
        printf("Subset Not possible ");
    }
    else{
        for(i=0;i<=n;i++){
            inc[i] = 0;
        }
        printf("\nPossible solution : ");
        SumOfSubset(-1,0,total);
    }

    return 0;
}
void SumOfSubset(int i,int wt,int total){
    int j;
    if(Promising(i,wt,total)){
        if(wt==sum){
            printf("\n{\t");
            for(j=0;j<=i;j++){
                if(inc[j]){
                    printf("%d \t",w[j]);
                }
            }
            printf("}\n");
        }
        else{
            inc[i+1] = True;
            SumOfSubset(i+1,wt+w[i+1],total-w[i+1]);
            inc[i+1] = Flase;
            SumOfSubset(i+1,wt,total-w[i+1]);
        }
    }
}
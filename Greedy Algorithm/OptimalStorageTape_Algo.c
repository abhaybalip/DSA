// Greedy Algorithm - Optimal Storage on Tapes
// 
#include<stdio.h>
int n=3,sum=0,PSum = 0;
int L[] = {8,12,2};
int RT[] = {0,0,0};
void OptimalStorageSchedule();
void SortProgs();

int main(){
    OptimalStorageSchedule();

    return 0;
}

void OptimalStorageSchedule(){
    int i,k=0;
    printf("Original Program Length : ");
    for(i=0;i<n;i++){
        printf("%d ",L[i]);
    }
    for(i=0;i<n;i++){
        PSum += L[i];
        sum = PSum + L[i];
        RT[i] = sum;
    }
    printf("\n\nTotal Retreival Time : %d ",RT[2]);
    printf("\n\nMean Retreival Time : ",RT[2]/(float)n);
}
void SortProgs(){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(L[j+1]<L[j]){
                temp = L[j];
                L[j] = L[j+1];
                L[j+1] = temp;
            }
        }
    }
}
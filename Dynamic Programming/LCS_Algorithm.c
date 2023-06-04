// Dynamic Programming - Longest Commen subsequence
// 

#include<stdio.h>
#include<string.h>
#define P printf("\n");

int M[12][12],n,i,j,k,l1=0,l2=0,a3;
char A[20],B[20],C[20],D[20];
char None = ' ';

int Max(int,int);
void LCS();
void Disp();

int main(){
    printf("Enter String A : ");
    scanf("%s",&A);
    printf("Enter String B : ");
    scanf("%s",&B);
    l1 = strlen(A);
    l2 = strlen(B);
    for(i=0,j=1;A[i]!=None;i++){
        C[j++] = A[i];
    }
    C[j++] = None;
    for(i=0,j=1;B[i]!=None;i++){
        D[j++] = B[i];
    }
    D[j] = None;
    for(i=0;i<l1;i++){
        for(j=0;j<l2;j++){
            if(i==0 || j==0){
                M[i][j] = 0;
            }
        }
    }
    LCS();
    printf("\n\nLength of Longest Commen Subequence : %d ",M[l1][l2]);

    return 0;
}
void LCS(){
    int a1,a2;
    for(i=1;i<=l1;i++){
        for(j=1;j<l2;j++){
            if(C[i]==D[j]){
                M[i][j] = (M[i-1][j-1])+1;
            }
            else{
                a1 = M[i-1][j];
                a2 = M[i][j-1];
                M[i][j] = Max(a1,a2);
            }
        }
    }
    P;
    P;
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
    for(i=0;B[i]!=None;i++){
        printf("%0.2c ",B[i]);
    }
    P;
    for(i=0;B[i]!=None;i++){
        if(i==0){
            printf("   ");
        }
        if(i>0){
            printf("%c | ",A[i-1]);
        }
        for(j=0;j<l2;j++){
            printf("%02c ",M[i][j]);
        }
        P;P;
    }
}
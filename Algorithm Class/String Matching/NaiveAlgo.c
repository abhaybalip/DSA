// Naive String Matching Algo
// 
#include<stdio.h>
#include<string.h>
int NaiveStringMatch(char[],char[]);

int main(){
    char Text[100],Pattern[100];
    int status;
    printf("Enter Text : ");
    gets(Text);
    printf("Enter Pattern : ");
    gets(Pattern);
    status = NaiveStringMatch(Text,Pattern);
    if(status==-1){
        printf("Pattern doesnt exixt \n");
    }
    else{
        printf("Pattern Found at shieft : %d \n",status);
    }

    return 0;
}
int NaiveStringMatch(char Text[100],char Pattern[100]){
    int n,m,i,j,count=0,temp=0;
    n = strlen(Text);
    m = strlen(Pattern);
    for(i=0;i<n;i++){
        temp++;
        for(j=0;j<m;j++){
            if(Text[i+j]==Pattern[j]){
                count++;
            }
        }
        if(count==m){
            return temp;
        }
        count = 0;
    }
    return -1;
}
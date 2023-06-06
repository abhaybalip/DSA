// Finite Autometa Theory
// 
#include<stdio.h>
#include<string.h>

int ninputs;
int check(char,int);
int DFA[10][10],c[10],String[10];

int main(){
    int nstates,nfinals;
    int f[10];
    int i,j,s=0,final=0;
    printf("Enter No of States : ");
    scanf("%d",&nstates);
    printf("Enter No of Inputs : ");
    scanf("%d",&ninputs);
    printf("Enter Input Symbol : ");
    fflush(stdin);
    for(i=0;i<ninputs;i++){
        printf("Input %d : ",i+1);
        scanf("%c",&c[i]);
        fflush(stdin);
    }
    printf("Enter No of Final States : ");
    scanf("%d",&nfinals);
    for(i=0;i<nfinals;i++){
        printf("Enter Final %d : ",i+1);
        scanf("%c",f[i]);
    }
    printf("\n\nDefine Transition Rule : (Current State,Input Symbol) = Final State \n");
    for(i=0;i<ninputs;i++){
        for(j=0;j<nstates;j++){
            printf("\n(q%d)",&DFA[i][j]);
        }
    }
    do{
        i = 0;
        printf("\n\nEnter Input String : ");
        scanf("%s",&String);
        while(String[i]!='\0'){
            if((s=check(String[i++],s))<0){
                break;
            }
        }
        for(i=0;i<nfinals;i++){
            if(f[i]==s){
                final = 1;
            }
        }
        if(final==1){
            printf("Valid String \n");
        }else{
            printf("INvalid String \n");
        }
        getch();
        printf("Do you want to continue : Y/N ");
    }while(getch()=='y');
    getch();

    return 0;
}
int check(char b,int d){
    int j;
    for(j=0;j<ninputs;j++){
        if(b==c[j]){
            return DFA[d][j];
        }
    }
    return -1;
}
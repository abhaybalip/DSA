// Greedy Algorithm - KnapSack Algorithm
// 

#include<stdio.h>
#include<conio.h>

void KnapSack(int n,float weight[],float value[],float w){
    float x[20],tp=0;
    int i,j,u;
    u = w;
    for(i=0;i<n;i++){
        x[i] = 0.0;
    }
    for(i=0;i<n;i++){
        if(weight[i]>u){
            break;
        }
        else{
            x[i] = 1.0;
            tp += value[i];
            u -= weight[i];
        }
    }
    if(i<n){
        x[i] = u/weight[i];
    }
    tp += x[i]*value[i];
    printf("\n\nWeight ||");
    for(i=0;i<n;i++){
        printf("%1.2f \t ",value[i]);
    }
    printf("\nx || ");
    for(i=0;i<n;i++){
        printf("%1.2f \t",x[i]);
    }
    printf("\nMaximum Possible Profit : %0.2f ",tp);
}
int main(){
    float weight[20],value[20],w;
    int n,i,j;
    float ratio[20],temp;
    printf("Enter no of Items : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter weight : ");
        scanf("%f",&weight[i]);
        printf("Enter Value : ");
        scanf("%f",&value[i]);
    }
    printf("Enter KnapSack Capacity : ");
    scanf("%f",&w);
    for(i=0;i<n;i++){
        ratio[i] = value[i]/weight[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(ratio[i]<ratio[j]){
                temp = ratio[j];
                ratio[j] = ratio[i];
                ratio[i] = temp;

                temp = weight[j];
                weight[j] = weight[i];
                weight[i] = temp;

                temp = value[j];
                value[j] = value[i];
                value[i] = temp;
            }
        }
    }
    KnapSack(n,weight,value,w);

    return 0;
}
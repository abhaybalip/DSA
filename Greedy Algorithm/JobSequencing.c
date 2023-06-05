// Greedy Algorithm - Job Sequencing

#include<stdio.h>
#include<conio.h>
#define Max 100;

struct Job{
    char id[5];
    int DeadLine;
    int Profit;
};
void JobSequencing(struct Job jobs[],int n);
int main(void){
    int i,j,n=5;
    struct Job jobs[5] = {
        {"j1",2,30},
        {"j2",1,80},
        {"j3",3,40},
        {"j4",2,25},
        {"j5",1,30}
    };
    struct Job temp;
    for(i=1;i<n;i++){
        for(j=0;j<n;j++){
            if(jobs[j+1].Profit > jobs[j].Profit){
                temp = jobs[j+1];
                jobs[j+1] = jobs[j];
                jobs[j] = temp;
            }
        }
    }
    printf("%10s    %10s    %10s","Job","DeadLine","Profit");
    for(i=0;i<n;i++){
        printf("%10s    %10s    %10s \n",jobs[i].id,jobs[i].DeadLine,jobs[i].Profit);
    }
    JobSequencing(jobs,n);

    return 0;
}

void JobSequencing(struct Job jobs[],int n){
    int i,j,k,MaxProfit ,FilledTimeSlot = 0,Dmax = 0;
    int TimeSlot[100];
    for(i=0;i<n;i++){
        if(jobs[i].DeadLine>Dmax){
            Dmax = jobs[i].DeadLine;
        }
    }
    for(i=1;i<=Dmax;i++){
        TimeSlot[i] = -1;
    }
    printf("DMax = %d \n",Dmax);
    for(i=1;i<=n;i++){
        k = minValue(Dmax,jobs[i].DeadLine);
        while(k>=1){
            if(TimeSlot[k]==-1){
                TimeSlot[k] = i-1;
                FilledTimeSlot++;
                break;
            }
            k--;
        }
        if(FilledTimeSlot==Dmax){
            break;
        }
    }
    printf("\nRequired Jobs : ");
    for(i=1;i<=Dmax;i++){
        printf("%s ",jobs[TimeSlot[i]].id);
        if(i<Dmax){
            printf(" : ");
        }
    }

    MaxProfit = 0;
    for(i=1;i<Dmax;i++){
        MaxProfit += jobs[TimeSlot[i]].Profit;
    }
    printf("Max Profit : %d \n",MaxProfit);
}
int minVlaue(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
// Greedy Algorithm - Job Sequencing

#include<stdio.h>
#include<conio.h>
#define Max 100;

struct Job{
    char Id[5];
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
        printf("%10s    %10s    %10s \n",jobs[i].Id,jobs[i].DeadLine,jobs[i].Profit);
    }
    JobSequencing(jobs,n);

    return 0;
}
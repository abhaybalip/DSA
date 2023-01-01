// Data Structure - Queue - Queue
#include<stdio.h>
int Size = 5;
int f=-1,r=-1;
int Queue[5];
void EnQueue(int x){
    if(r==Size-1){
        printf("Queue is Full \n");
    }
    else if(f==-1 && r==-1){
        f = r = 0;
        Queue[r] = x;
    }
    else{
        r++;
        Queue[r] = x;
    }
}
void DeQueue(){
    if(f==-1 && r==-1){
        printf("Queue is Empty \n");
    }
    else if(f==r-1){
        printf("Deleted Data : %d \n",Queue[f]);
        f = r = 0;
    }
    else{
        printf("Deleted Data : %d \n",Queue[f]);
        f++;
    }
}
void Display(){
    if(f==-1 && r==-1)  {
        printf("Queue is Empty \n");
    }
    else{
        for(int i=f;i<r+1;i++){
            printf("Index : %d Data : %d \n",i+1,Queue[i]);
        }
    }
}
void Peek(int x){
    if(x<1 || x>Size) {
        printf("Invalid Index! \n");
    }
    else {
        printf("Index : %d Data : %d \n",x,Queue[x]);
    }
}
void main(){
    for(int i=0;i<Size;i++){
        EnQueue(i);
    }
    Display();
}
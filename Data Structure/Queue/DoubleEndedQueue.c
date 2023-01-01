// Data Structure - Queue - Double Ended Queue
#include<stdio.h>
int Size = 5;
int f=-1,r=-1;
int Queue[5];
void EnQueueFront(int x){
    if(f==0&&r==Size-1 || f==r+1){
        printf("Queus is Full \n");
    }
    else if(f==r){
        f = Size -1;
        Queue[f] = x;
    }
    else{
        f--;
        Queue[f] = x;
    }
}
void EnQueueRear(int x){
    if(f==0&&r==Size-1 || f==r+1){
        printf("Queue is Full \n");
    }
    else if(f==-1 && r==-1){
        f = r = 0;
    }
    else if(r==Size-1){
        r = 0;
        Queue[r] = x;
    }
    else {
        r++;
        Queue[r] = x;
    }
}
void DeQueueFront(){
    if(f==-1 && r==-1){
        printf("Queue is Empty \n");
    }
    else if(f==r){
        f = r = -1;
    }
    else if(f==Size-1){
        f = 0;
    }
    else{
        f++;
    }
}
void DeQueueRear(){
    if(f==-1 && r==-1){
        printf("Queue is Empty \n");
    }
    else if(f==r){
        f = r = -1;
    }
    else if(r==0){
        r = Size -1;
    }
    else {
        r--;
    }
}
void Display(){
    if(f==-1 && r==-1){
        printf("Queue is Empty \n");
    }
    else {
        for(int i=0;i<Size;i++){
            printf("Index : %d Data : %d \n",i+1,Queue[i]);
        }
    }

}
void main(){
    
}
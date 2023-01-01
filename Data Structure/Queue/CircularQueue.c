// c program - Queue - Circular Queue
#include<stdio.h>
int Size = 5;
int f = -1,r = -1;
int Queue[5];
int inc(int x)
{
    return (x+1)%Size;
}
void EnQueue(int x){
    if(f==-1 && r==-1){
        f = r = 0;
        Queue[r] = x;
    }
    else if(f==r){
        r = inc(r);
        Queue[r] = x;
    }
    else if(f==inc(r)){
        printf("Queue is Full \n");
    }
    else{
        inc(r);
        Queue[r] = x;
    }
}
void DeQueue(){
    if(f==-1 && r==-1){
        printf("Queue is Empty \n");
    }
    else if(f==r){
        printf("Deleted Data : %d \n",Queue[f]);
        f = r = -1;
    }
    else{
        printf("Deleted Data : %d \n",Queue[f]);
        f = inc(f);
    }
}
void Display(){
    if(f==-1 && r==-1){
        printf("Queue is Empty \n");
    }
    else{
        int i = f;
        while(i!=r){
            printf("Index %d Data : %d \n",inc(i),Queue[i]);
            i = inc(i);
        }
    }
}
void main(){

}
// Data Structure - Example of hashing
#include<stdio.h>
#include<stdlib.h>
struct Set{
    int size;
    int*Data;
};
int HashFunction(struct Set s,int Key){
    int Index = (Key-1) % s.size;
    return Index;
}
struct Set InitSet(int size){
    struct Set s;
    s.size = size;
    s.Data = (int*)malloc(size*sizeof(int*));
    for(int i=0;i<size;i++){
        s.Data[i] = 0;
    }
    return s;
}
void InsertData(struct Set s,int Key,int Data){
    if(Key>0 && Key<=s.size){
        int Index = HashFunction(s,Key);
        s.Data[Index] = Data;
        printf("Data set \n");
    }else{
        printf("Invalid Key ! \n");
    }
}
void DeleteData(struct Set s,int Key){
    if(Key>0 && Key<=s.size){
        int Index = HashFunction(s,Key);
        s.Data[Index] = 0;
        printf("Data Deleted \n");
    }else{
        printf("Invalid Key ! \n");
    }
}
void Display(struct Set s){
    for(int i=0;i<s.size;i++){
        printf("Data : %d \n",s.Data[i]);
    }
}
int main(){
    struct Set s = InitSet(10);
    InsertData(s,1,100);
    InsertData(s,2,50);
    InsertData(s,3,90);
    DeleteData(s,2);
    Display(s);
    return 0;
}
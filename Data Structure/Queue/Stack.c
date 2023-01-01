// Data Structure - Stack
#include<stdio.h>
int Size = 5;
int Stack[5];
int Top = -1;
void Push(int Data){
    if(Top==Size-1){
        printf(
            "Stack is Full ! \n"
        );
    }
    else{
        Top++;
        Stack[Top] = Data;
    }
}
void Pop(){
    if(Top==-1){
        printf(
            "Stack is Empty ! \n"
        );
    }
    else{
        printf("Deleted Data : %d \n",Stack[Top]);
        Top--;
    }
}
int Search(int Data){
    int i = 0;
    while(i++<=Size){
        if(Stack[i]==Data){
            return i;
            break;
        }
    }
    return -1;
}
void Display(){
    if(Top==-1){
        printf("Stack is Empty ! \n");
    }
    else{
        int i = 0;
        while(i++<=Top){
            printf("Data : %d \n",Stack[i]);
        }
    }
}
void main(){
    for(int i=0;i<Size;i++){
        Push(i);
    }
    Display();
    int s = Search(2);
    printf("%d \n",s);
}
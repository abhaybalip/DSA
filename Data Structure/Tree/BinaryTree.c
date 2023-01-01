// Data Structure - Tree - Binary Tree
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int Data;
    struct Node*Link_Left;
    struct Node*Link_Right;
};
struct Node*CreatNode(int Data){
    struct Node* Term = (struct Node*)malloc(sizeof(struct Node*));
    Term->Data = Data;
    Term->Link_Left = Term->Link_Right = NULL;
    return Term;
}
struct Node*InsertLeft(struct Node*Parent,int Data){
    if(Parent==NULL){
        Parent = CreatNode(Data);
    }
    else{
        Parent->Link_Left = CreatNode(Data);        
    }
}
struct Node*InsertRight(struct Node*Parent,int Data){
    if(Parent==NULL){
        Parent = CreatNode(Data);
    }
    else{
        Parent->Link_Right = CreatNode(Data);        
    }
}
void Display(struct Node*Root){
    if(Root==NULL){
        printf("Node is NULL ! \n");
    }
    else{
        // Root Left Right - pre order display
        printf("Data : %d \n",Root->Data);
        Display(Root->Link_Left);
        Display(Root->Link_Right);
    }
}
int main(){

    return 0;
}
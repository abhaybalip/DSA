// DataStructure - Tree - PerfectBinary Tree
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Node{
    int Data;
    struct Node*Left,*Right;
};
struct Node*CreatNode(int Data){
    struct Node*Term = (struct Node*)malloc(sizeof(struct Node*));
    Term->Data = Data;
    Term->Left = Term->Right = NULL;
    return Term;
}
bool IsPerfectBinary(struct Node*Root){
    if(Root==NULL) return true;
    else if(Root->Left==NULL && Root->Right==NULL) return true;
    else{
        bool l = IsPerfectBinary(Root->Left),
        r = IsPerfectBinary(Root->Right);
        return l&&r;
    }
}
struct Node*InsertNode(struct Node*Root,int Data){
    if(Root==NULL){
        Root = CreatNode(Data);
        return Root;
    }
    else{
        if(Data<Root->Data){
            Root->Left = InsertNode(Root->Left,Data);
        }
        else{
            Root->Right = InsertNode(Root->Right,Data);
        }
    }
}
void Display(struct Node*Root){
    if(Root==NULL) printf("Empty Root ! \n");
    else{
        Display(Root->Left);
        printf("Data : %d \n",Root->Data);
        Display(Root->Right);
    }
}
int main(){
    return 0;
}
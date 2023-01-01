// Data Structure - Tree - Binary Search Tree
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int Data;
    struct Node*Link_Left;
    struct Node*Link_Right;
};
struct Node*CreatNode(int Data){
    struct Node*Term = (struct Node*)malloc(sizeof(struct Node*));
    Term->Data = Data;
    Term->Link_Left = NULL;
    Term->Link_Right = NULL;
    return Term;
}
struct Node*InsertBranch(struct Node*Parent,struct Node*Child){
    if(Parent==NULL) Parent = Child;
    else{
        struct Node*Temp = Parent,*Temp2;
        while(Temp!=NULL){
            Temp2 = Temp;
            if(Child->Data<Temp->Data) Temp = Temp->Link_Left;
            else Temp = Temp->Link_Right;
        }
        if(Temp2->Link_Left==NULL) Temp2->Link_Left = Child;
        else Temp2->Link_Right = Child;
    }
}
struct Node*InsertNode(struct Node*Root,int Data){
    if(Root==NULL) Root = CreatNode(Data);
    else{
        struct Node*Temp = Root,*Temp2;
        while(Temp!=NULL){
            Temp2 = Temp;
            if(Data<Temp->Data) Temp = Temp->Link_Left;
            else Temp = Temp->Link_Right;
        }
        if(Data<Temp2->Data) Temp2->Link_Left = CreatNode(Data);
        else Temp2->Link_Left = CreatNode(Data);
    }
    return Root;
}
struct Node*DeleteNode(struct Node*Root,int Data){
    if(Root==NULL){
        printf("Root is NULL ! \n");
    }
    else{
        struct Node*Temp = Root,*Temp2;
        while(Temp!=NULL){
            Temp2 = Temp;
            if(Temp->Data==Data){
                InsertBranch(Temp2,Temp->Link_Left);
                InsertBranch(Temp2,Temp->Link_Right);
                free(Temp);
                printf("Data Found and Deleted \n");
            }
            else{
                if(Data<Temp->Data) Temp = Temp->Link_Left;
                else Temp = Temp->Link_Right;
            }
        }
    }
    return Root;
}
int SearchNode(struct Node*Root,int Data){
    if(Root==NULL) printf("Root is NULL ! \n");
    else{
        struct Node*Temp = Root;
        int count = 0;
        while(Temp!=NULL){
            count++;
            if(Temp->Data==Data){
                printf("Data Found at level : %d \n",count);
                return count;
            }
            else{
                if(Data<Temp->Data) Temp = Temp->Link_Left;
                else Temp = Temp->Link_Right;
            }
        }
    }
    return -1;
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
    // struct Node* Root = CreatNode(100);
    // Root = InsertNode(Root,50);
    // Root = InsertNode(Root,200);
    // Root = InsertNode(Root,150);
    // Display(Root);
    return 0;
}
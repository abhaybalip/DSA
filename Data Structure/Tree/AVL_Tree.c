// Data Structure - Tree - AVL Tree
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int Data;
    struct Node*Link_Left;
    struct Node*Link_Right;
};
struct Node*CreatNode(int Data){
    struct Node*Node = (struct Node*)malloc(sizeof(struct Node*));
    Node->Data = Data;
    Node->Link_Left = Node->Link_Right = NULL;
    return Node;
}
int getHeight(struct Node*Node){
    if(Node==NULL) return -1;
    else{
        int lh = getHeight(Node->Link_Left) + 1,rh = getHeight(Node->Link_Right) + 1;
        if(lh>rh) return lh;
        else return rh; 
    }
}
int BalanceFactor(struct Node*Node){
    return(getHeight(Node->Link_Left) - getHeight(Node->Link_Right));
}
struct Node*RotateLeft(struct Node*Node){
    struct Node*t1 = Node,*t2 = t1->Link_Right,*t3 = t2->Link_Left;
    t2->Link_Left = t1;
    t1->Link_Right = t3;
    return t2;
}
struct Node*RotateRight(struct Node*Node){
    struct Node*t1 = Node,*t2 = t1->Link_Left,*t3 = t2->Link_Right;
    t2->Link_Right = t1;
    t1->Link_Left = t3;
    return t2;
}
struct Node*InsertNode(struct Node*Root,int Data){
    if(Root==NULL){
        return (Root = CreatNode(Data));
    }
    else{
        if(Data<Root->Data) Root->Link_Left = InsertNode(Root->Link_Left,Data);
        else Root->Link_Right = InsertNode(Root->Link_Right,Data);
    }
    int bf = BalanceFactor(Root);
    // r rotation / left weighted
    if(bf>1){
        if(Data<Root->Link_Left->Data){
            RotateRight(Root);
        }
        else if(Data>Root->Link_Left->Data){
            Root->Link_Left = RotateLeft(Root->Link_Left);
            RotateRight(Root);
        }
    }
    // l rotation / right weighted
    else if(bf<-1){
        if(Data<Root->Link_Right->Data){
            Root->Link_Right = RotateRight(Root->Link_Right);
            RotateLeft(Root);
        }
        else if(Data<Root->Link_Right->Data){
            RotateLeft(Root);
        }
    }
    return Root;
}
struct Node*DeleteNode(struct Node*Root,int Data){
    if(Root==NULL){
        printf("Root is Empty ! \n");
        return Root;
    }
    else{
        if(Data<Root->Data) Root->Link_Left = DeleteNode(Root->Link_Left,Data);
        else if(Data>Root->Data) Root->Link_Right = DeleteNode(Root->Link_Right,Data);
        else{
            if(Root->Link_Left==NULL && Root->Link_Right==NULL){
                free(Root);
                return NULL;
            }
            else if(Root->Link_Left==NULL || Root->Link_Right==NULL){
                struct Node*Temp;
                if(Root->Link_Left==NULL) Temp = Root->Link_Right;
                else Temp = Root->Link_Left;
                free(Root);
                return Temp;
            }
            else{
                struct Node*Temp = Root;
                while(Temp->Link_Left!=NULL && Temp->Link_Right!=NULL){
                    Temp = Temp->Link_Left;
                }
                Root->Data = Temp->Data;
                DeleteNode(Root,Temp->Data);
            }
        }
        // Tree Balancing
        int bf = BalanceFactor(Root);
        // r rotation / left weighted
        if(bf>1){
            if(Data<Root->Link_Left->Data){
                Root = RotateRight(Root);
            }
            else if(Data>Root->Link_Left->Data){
                Root->Link_Left = RotateLeft(Root->Link_Left);
                Root = RotateRight(Root);
            }
        }
        // l rotation / right weighted
        else if(bf<-1){
            if(Data<Root->Link_Right->Data){
                Root->Link_Right = RotateRight(Root->Link_Right);
                Root = RotateLeft(Root);
            }
            else if(Data<Root->Link_Right->Data){
                Root = RotateLeft(Root);
            }
        }
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
    struct Node*Root = CreatNode(100);
    Root = InsertNode(Root,150);
    Root = InsertNode(Root,50);
    Root = InsertNode(Root,200);
    
    return 0;
}
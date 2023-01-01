// DataStructure - Tree - BTree
#include<stdio.h>
#include<stdlib.h>
#define Max 3
#define Min 2
struct Node{
    int Data[Max+1];
    int DataCount,LinkCount;
    struct Node*Link[Max+1];
};
struct Node*root;
struct Node*CreatNode(int Data, struct Node *child) {
  struct Node*newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->Data[1] = Data;
  newNode->DataCount = 1;
  newNode->Link[0] = root;
  newNode->Link[1] = child;
  return newNode;
}
struct Node*InsertNode(int Data,int pos,struct Node*node,struct Node*child){
    int j = node->DataCount;
    while(j>pos){
        node->Data[j+1] = node->Data[j];
        node->Link[j+1] = node->Link[j];
        j--;
    }
    node->Data[j+1] = Data;
    node->Link[j+1] = child;
    node->DataCount ++;
    node->LinkCount ++;
}
void SplitNode(int Data,int *pData,int pos,struct Node*node,struct Node*child,struct Node**newnode){
    int median,j;
    if(pos>j) median = Min +1;
    else median = Min;
    *newnode = (struct Node*)malloc(sizeof(struct Node*));
    j = median +1;
    while(j<=Max){
        (*newnode)->Data[j-median] = node->Data[j];
        (*newnode)->Link[j-median] = node->Link[j];
        j++;
    }
    node->DataCount = median;
    (*newnode)->DataCount = Max-median;
    if(pos<=Min){
        InsertNode(Data,pos,node,child);
    }
    else{
        InsertNode(Data,pos-median,*newnode,child);
    }
    *pData = node->Data[node->DataCount];
    (*newnode)->Link[0] = node->Link[node->DataCount];
    node->DataCount--;
}
int SetData(int Data,int*PData,struct Node*node,struct Node**child){
    int pos;
    if(!node){
        *PData = Data;
        *child = NULL;
        return 1;
    }
    if(Data<node->Data[1]){
        pos = 0;
    }
    else{
        for(pos=node->DataCount;(Data<node->Data[pos] && pos>1);pos--){
            if(Data==node->Data[pos]){
                printf("Duplicate Data \n");
                return 0;
            }
        }
    }
    if(SetData(Data,PData,node->Link[pos],child)){
        if(node->DataCount<Max){
            InsertNode(*PData,pos,node,*child);
        }
        else{
            SplitNode(*PData,PData,pos,node,*child,child);
            return 1;
        }
    }
    return 0;
}
void Insert(int Data){
    int flag,i;
    struct Node*child;
    flag = SetData(Data,&i,root,&child);
    if(flag){
        root = CreatNode(i,child);
    }
}
void Search(int Data,int*pos,struct Node*MyNode){
    if(!MyNode){
        return ;
    }
    if(Data<MyNode->Data[1]){
        *pos = 0;
    }
    else{
        for(*pos=MyNode->DataCount;(Data<MyNode->Data[*pos] && *pos>1);(*pos)--){
            if(Data==MyNode->Data[*pos]){
                printf("%d is found \n",Data);
                return ;
            }
        }
    }
    Search(Data,pos,MyNode->Link[*pos]);
    return ;
}
void Traversal(struct Node*MyNode){
    int i;
    if(MyNode){
        for(i=0;i<MyNode->DataCount;i++){
            Traversal(MyNode->Link[i]);
            printf("%d \n",MyNode->Data[i+1]);
        }
        Traversal(MyNode->Link[i]);
    }
}
int main(){
    return 0;
}
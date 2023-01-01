// Data Structure - LinkedList - Doubly Linked List
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int Data;
    struct Node*Link_Prev;
    struct Node*Link_Next;
};
// Insert Data at end of linked list
struct Node* InsertData(struct Node*Head,int Data){
    struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node*));
    NewNode->Data = Data;
    NewNode->Link_Prev = NULL;
    NewNode->Link_Next = NULL;
    if(Head==NULL){
        Head = NewNode;
    }
    else{
        struct Node*Temp = Head;
        while(Temp->Link_Next != NULL){
            Temp = Temp->Link_Next;
        }
        NewNode->Link_Prev = Temp;
        Temp->Link_Next = NewNode;
    }
    return Head;
}
// Insert Data at specified position in linked list
struct Node* InsertAtpos(struct Node*Head,int Pos,int Data){
    struct Node*NewNode = (struct Node*)malloc(sizeof(struct Node*));
    NewNode->Data = Data;
    NewNode->Link_Prev = NULL;
    NewNode->Link_Next = NULL;
    if(Head==NULL){
        Head = NewNode;
    }
    else{
        struct Node* Temp = Head,*Temp2;
        int count = 0;
        while(count<=Pos){
            Temp2 = Temp;
            Temp  = Temp->Link;
        }
        NewNode->Link_Next = Temp->Link_Next;
        NewNode->Link_Prev = Temp2;
        Temp->Link_Prev    = NewNode;
        Temp2->Link_Next   = NewNode;
    }
    return Head;
}
// Search Data in given linked list return index if found
int SearchData(struct Node*Head,int Data){
    if(Head==NULL){
        printf("List is Empty ! \n");
    }
    else{
        struct Node*Temp = Head;
        while(Temp->Link_Next != NULL){
            int count = 0;
            if(Temp->Data == Data){
                return count;
                break;
            }
            Temp = Temp->Link_Next;
            count ++;
        }
        return -1;
    }
}
// Delete Last Element in linked list
struct Node* DeleteLast(struct Node*Head){
    if(Head==NULL){
        printf("Stack is Empty ! \n");
    }
    else{
        struct Node*Temp = Head,*Temp2;
        while(Temp->Link_Next != NULL){
            Temp2 = Temp;
            Temp = Temp->Link_Next;
        }
        Temp2->Link_Next = NULL;
        printf("Deleted Data : %d \n",Temp->Data);
        free(Temp);
    }
    return Head;
}
// Delete specified data in given linked list
struct Node* DeleteData(struct Node*Head,int Data){
    if(Head==NULL){
        printf("List is Empty ! \n");
    }
    else{
        struct Node*Temp = Head,*Temp2;
        int index = SearchData(Head,Data);
        if(index<0){
            printf("Data Not Present !");
        }
        else{
            while(index-->=0){
                Temp2 = Temp;
                Temp  = Temp->Link;
            }
            printf("Deleted Data : %d \n",Temp->Data);
            Temp->Link_Next->Link_Prev = Temp2;
            Temp2->Link_Next = Temp->Link_Next;
            free(Temp);
        }
    }
    return Head;
}
// Dsiplay Entire linked list
void Display(struct Node*Head){
    if(Head==NULL){
        printf("List is Empty ! \n");
    }
    else{
        struct Node* Temp = Head;
        while(Temp->Link_Next != NULL){
            printf("Data : %d \n",Temp->Data);
            Temp = Temp->Link_Next;
        }
        printf("Data : %d \n",Temp->Data);
    }
}
int main(){
//    struct Node* linkedlist = NULL;
//    linkedlist = InsertData(linkedlist, );
//    linkedlist = InsertAtpos(linkedlist, , );
//    linkedlist = DeleteData(linkedlist, );
//    Display(linkedlist);
}
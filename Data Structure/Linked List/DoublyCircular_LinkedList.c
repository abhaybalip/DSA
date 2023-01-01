// c progrma - LinkedList - Doubly Circular Linked List
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int Data;
    struct Node*Link_Prev;
    struct Node*Link_Next;
};
struct Node*CreatNode(int Data){
    struct Node*Term = (struct Node*)malloc(sizeof(struct Node*));
    Term->Data       = Data;
    Term->Link_Next  = NULL;
    Term->Link_Prev  = NULL;
    return Term;
}
struct Node* InsertFirst(struct Node*Head,int Data){
    if(Head==NULL){
        Head = CreatNode(Data);
        Head->Link_Next = Head;
        Head->Link_Prev = Head;
    }
    else{
        struct Node*Temp = Head,*Term = CreatNode(Data);
        while(Temp->Link_Next!=Head){
            Temp = Temp->Link_Next;
        }
        Temp->Link_Next = Term;
        Term->Link_Next = Head;
        Head->Link_Prev = Term;
        Head            = Term;
        Head->Link_Prev = Temp;
    }
    return Head;
}
struct Node* InsertLast(struct Node*Head,int Data){
    if(Head==NULL){
        printf("List is Empty ! \n");
    }
    else{
        struct Node*Temp = Head,*Term = CreatNode(Data);
        while(Temp->Link_Next!=Head){
            Temp  = Temp->Link_Next;
        }
        Temp->Link_Next  = Term;
        Term->Link_Next  = Head;
        Term->Link_Prev  = Temp;
    }
    return Head;
}
struct Node* DeleteFirst(struct Node*Head,int Data){
    if(Head==NULL){
        printf("List is Empty ! \n");
    }
    else{
        struct Node*Temp = Head,*Temp2 = Head;
        while(Temp->Link_Next!=Head){
            Temp  = Temp->Link_Next;
        }
        Temp->Link_Next = Head->Link_Next;
        Head->Link_Next->Link_Prev = Temp;
        free(Temp2);
    }
    return Head;
}
struct Node* DeleteLast(struct Node*Head,int Pos,int Data){
    if(Head==NULL){
        printf("List is Empty ! \n");
    }
    else{
        struct Node*Temp = Head;
        while(Temp->Link_Next!=Head){
            Temp  = Temp->Link_Next;
        }
        Temp->Link_Prev->Link_Next = Head;
        Head->Link_Prev = Temp->Link_Prev;
        free(Temp);
    }
}
struct Node* InsertAtPos(struct Node*Head,int pos,int Data){
    if(Head==NULL){
        printf("List is Empty ! \n");
    }
    else{
        struct Node*Temp = Head,*Term = CreatNode(Data);
        int count = 0;
        while(count<Pos){
            count ++;
            Temp = Temp->Link_Next;
        }
        Temp->Link_Next->Link_Prev = Term;
        Term->Link_Next = Temp->Link_Next;
        Term->Link_Prev = Temp;
        Temp->Link_Next = Term;
    }
}
struct Node* DeleteAtPos(struct Node*Head,int pos){
    if(Head==NULL){
        printf("List is Empty ! \n");
    }
    else{
        struct Node*Temp = Head,*Temp2;
        int count = 0;
        while(count<Pos){
            count ++;
            Temp = Temp->Link_Next;
        }
        Temp2 = Temp->Link_Prev;
        Temp2->Link_Next = Temp->Link_Next;
        Temp->Link_Next->Link_Prev = Temp2;
        free(Temp);
    }
}
int SearchData(struct Node*Head,int Data){
    if(Head==NULL){
        printf("List is Empty ! \n");
    }
    else{
        int count = 0;
        struct Node*Temp = Head;
        while(Temp->Link_Next!=NULL){
            if(Temp->Data==Data){
                return count;
                break;
            }
            count++;
            Temp = Temp->Link_Next;
        }
        return -1;
    }
}
void Display(struct Node*Head){
    if(Head==NULL){
        printf("List is Empty ! \n");
    }
    else{
        struct Node*Temp = Head;
        while(Temp->Link_Next!=Head){
            printf("Data : %d \n",Temp->Data);
            Temp = Temp->Link_Next;
        }
    }
}
int main(){
    return 0;
}
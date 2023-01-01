// Data Structure - Graph - BFS_Traversal
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define size 10
struct Node{
    int Data;
    struct Node*Next;
};
struct Graph{
    int count;
    struct Node**List;
    int*visited;
};
struct Queue{
    int Items[size];
    int front ,rear;
};
struct Node*CreatNode(int Data){
    struct Node*Term = (struct Node*)malloc(sizeof(struct Node));
    Term->Data = Data;
    Term->Next = NULL;
    return Term;
}
struct Graph*CreatGraph(int count){
    struct Graph*Term = (struct Graph*)malloc(sizeof(struct Graph));
    Term->count = count;
    Term->List = (struct Node*)malloc(count*sizeof(struct Node));
    Term->visited = (int*)malloc(count*sizeof(int));
    for(int i=0;i<count;i++){
        Term->List[i] = NULL;
        Term->visited[i] = 0;
    }
    return Term;
}
struct Graph*InsertEdge(struct Graph*Graph,int d1,int d2){
    struct Node*NewNode = CreatNode(d1),*NewNode2 = CreatNode(d2);
    NewNode->Next = Graph->List[d2];
    NewNode2->Next = Graph->List[d1];

    Graph->List[d1] = NewNode2;
    Graph->List[d2] = NewNode;
    return Graph;
}
struct Queue*CreatQueue(){
    struct Queue*q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = q->rear = -1;
    return q;
}
bool IsEmpty(struct Queue*q){
    if(q->rear==-1) return true;
    else return false;
}
void EnQueue(struct Queue*q,int Data){
    if(q->rear==size-1){
        printf("Queue is Full ! \n");
    }
    else{
        if(q->front==-1){
            q->front = 0;
        }
        q->rear++;
        q->Items[q->rear] = Data;
    }
}
int DeQueue(struct Queue*q){
    int item;
    if(IsEmpty(q)){
        printf("Queue is Full ! \n");
        item = -1;
    }
    else{
        item = q->Items[q->rear];
        q->front++;
        if(q->front > q->rear){
            printf("Resetting Queue \n");
            q->front = q->rear = -1;
        }
    }
    return item;
}
void PrintQueue(struct Queue*q){
    int i = q->front;
    if(IsEmpty(q)){
        printf("Queue is Empty ! \n");
    }
    else{
        printf("Queue Data : \n");
        for(i=q->front;i<q->rear;i++){
            printf("%d ",q->Items[i]);
        }
    }
}
void BFS_Traversal(struct Graph*g,int vertex){
    struct Queue*q = CreatQueue();
    g->visited[vertex] = 1;
    EnQueue(q,vertex);
    while(!IsEmpty(q)){
        int cur = DeQueue(q);
        printf("Visited : %d \n",cur);
        struct Node*temp = g->List[cur];
        while(temp!=NULL){
            int ver = temp->Data;
            if(g->visited[ver]==0){
                g->visited[ver] = 1;
                EnQueue(q,ver);
            }
            temp = temp->Next;
        }
    }
}
int main(){
    struct Graph*g = CreatGraph(5);
    g = InsertEdge(g,0,1);
    g = InsertEdge(g,0,2);
    g = InsertEdge(g,1,2);
    BFS_Traversal(g,0);

    return 0;
}
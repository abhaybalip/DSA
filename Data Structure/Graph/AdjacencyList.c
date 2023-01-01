// Data Structure - Grpah - Adjacency List
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int Data;
    struct Node*Next;
};
struct Graph{
    int NodeCount;
    struct Node**List;
};
struct Node*CreatNode(int Data){
    struct Node*Term = (struct Node*)malloc(sizeof(struct Node*));
    Term->Data = Data;
    Term->Next = NULL;
    return Term;
}
struct Graph*CreatGrpah(int NodeCount){
    struct Graph*Term = (struct Graph*)malloc(sizeof(struct Graph*));
    Term->NodeCount = NodeCount;
    Term->List = (struct Node**)malloc(NodeCount*sizeof(struct Node*));
    for(int i=0;i<NodeCount;i++){
        Term->List[i] = NULL;
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
void PrintGraph(struct Graph*Graph){
    if(Graph==NULL){
        printf("graph is NULL ! \n");
    }
    else{
        int count = Graph->NodeCount;
        for(int i=1;i<=count;i++){
            struct Node*Temp = Graph->List[i];
            if(Temp==NULL) printf("Empty Item ! \n");
            else{
                printf("List : %d \n",i);
                while(Temp->Next!=NULL){
                    printf("Data : %d \t",Temp->Data);
                    Temp = Temp->Next;
                }
                printf("\n");
            }
        }
    }
}
int main(){
    struct Graph* G = CreatGrpah(3);
    G = InsertEdge(G,1,2);
    G = InsertEdge(G,1,3);
    G = InsertEdge(G,2,3);
    PrintGraph(G);
    return 0;
}
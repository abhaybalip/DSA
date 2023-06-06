// Data Structure - Search&SortAlgorithm - Linear Search
#include<stdio.h>
int LinearSearch_Array(int Array[],int Size,int Data){
    for(int i=0;i<Size;i++){
        if(Array[i]==Data){
            return i;
            break;
        }
    }
}
void main(){
    int Array[5] = {2,4,6,8,5};
    int index = LinearSearch_Array(Array,5,4);
    printf("index : %d \n",index);
}
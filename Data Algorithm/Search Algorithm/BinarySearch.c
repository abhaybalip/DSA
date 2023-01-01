// Data Structure - Search&SortAlgorithm -  Binary Search
#include<stdio.h>
void SortArray(int Array[],int Size){
    for(int i=0;i<Size;i++){
        for(int j=i;j<Size;j++){
            if(Array[i]<Array[j]){
                int Temp = Array[i];
                Array[i] = Array[j];
                Array[j] = Temp;
            }
        }
    }
}
int BinarySearch_Array(int Array[],int Size,int Data){
    int min = 0,max = Size,mid;
    while(min<=max){
        mid = (min+max)/2;
        if(Array[mid]==Data){
            return mid;
            break;
        }
        else{
            if(Data<Array[mid]) max = mid;
            else min = max;
        }
    }
}
void main(){
    int Array[5] = {1,3,5,6,8};
    int index = BinarySearch_Array(Array,5,5);
    printf("index : %d \n",index);
}
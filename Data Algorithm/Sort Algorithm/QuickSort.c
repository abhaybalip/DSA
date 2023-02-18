// Data Structure - QuickSort Algorithm
#include<stdio.h>
#include<stdlib.h>
// Function for Swapping Data
void Swap(int*a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Function for finding Partition point
int Partition(int arr[],int low,int high){
    int pivot = arr[high];
    int index = low -1;
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            index++;
            Swap(&arr[index],&arr[j]);
        }
    }
    Swap(&arr[index+1],&arr[high]);
    return index+1;
}
void QuickSort(int arr[],int low,int high){
    if(low<high){
        int par = Partition(arr,low,high);
        QuickSort(arr,low,par-1);
        QuickSort(arr,par+1,high);
    }
}
int main(){
    int arr[] = {5,52,32,12,43,24};
    int size = sizeof(arr)/sizeof(int);
    QuickSort(arr,0,size-1);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
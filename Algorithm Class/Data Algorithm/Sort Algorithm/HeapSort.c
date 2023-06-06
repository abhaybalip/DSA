// Data Structure - Search&Sort ALogirithm - HeapSort
#include<stdio.h>
#include<stdlib.h>
// functon for swapping two data
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
// function for making complete binary tree
void heapify(int arr[],int n,int i){
    int largest = i;
    int left = 2*i +1;
    int right = 2*i +2;
    if(left<n && arr[left]>arr[largest]){
        largest = left;
    }
    if(right<n &&arr[right]>arr[largest]){
        largest = right;
    }
    if(largest!=i){
        swap(&arr[i],&arr[largest]);
        heapify(arr,n,largest);
    }
}
// function for heap sort
void heapsort(int arr[],int n){
    // max heap
    for(int i=n/2-1;i>=0;i--)
        heapify(arr,n,i);

    for(int i=n-1;i>=0;i--){
        swap(&arr[0],&arr[i]);
        heapify(arr,i,0);
    }
}
// function for printing array
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[] = {1,5,6,2,4,3};
    int size  = sizeof(arr)/sizeof(int);
    heapsort(arr,size);
    printarray(arr,size);
    return 0;    
}
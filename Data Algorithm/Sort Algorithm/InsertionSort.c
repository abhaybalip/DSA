// Data Structure - Search&SortAlgorithm - InsertionSort
#include<stdio.h>
#include<stdlib.h>
void InsertionSort(int arr[],int size){
    for(int i=1;i<size;i++){
        int key = arr[i];
        int j = i-1;
        while(key<arr[j] && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
void main(){
    int arr[] = {45,10,65,70,25,40,50};
    int size = sizeof(arr)/sizeof(int);
    InsertionSort(arr,size);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
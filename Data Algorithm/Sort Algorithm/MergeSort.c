// Data Structure - Search&SortAlgorithm - Merge Sort
#include<stdio.h>
// Function for Merging Array
void MergeArray(int arr[],int low,int mid,int high){
    int n1 = mid - low +1, n2 = high - mid;
    int index=0;
    int arr1[n1],arr2[n2];
    for(int i=0;i<n1;i++){
        arr1[i] = arr[i+low];
    }
    for(int j=0;j<n2;j++){
        arr2[j] = arr[j+mid+1];
    }
    index = low;
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            arr[index] = arr1[i];
            i++;
        }
        else{
            arr[index] = arr2[j];
            j++;
        }
        index++;
    }
    while(i<n1){
        arr[index] = arr1[i];
        i++;
        index++;
    }
    while(j<n2){
        arr[index] = arr2[j];
        j++;
        index++;
    }
}
// Function for Merge Sorting
void MergeSort(int arr[],int low,int high){
    if(low<high){
        int mid;
        mid = low + (high-low)/2;
        MergeSort(arr,low,mid);
        MergeSort(arr,mid+1,high);
        MergeArray(arr,low,mid,high);
    }
}
// Function for printting Array
void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int array[] = {6, 5, 12, 10, 9, 1};
    int size = sizeof(array)/sizeof(int);
    MergeSort(array,0,size-1);
    PrintArray(array,size);
    return 0;
}
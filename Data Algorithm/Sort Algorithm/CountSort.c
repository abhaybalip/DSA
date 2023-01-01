// Data Structure - CountSorting
#include<stdio.h>
#include<stdlib.h>
// Function for CountSorting
int CountSort(int arr[],int size){
    // find max element
    int max = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max) max = arr[i];
    }
    // new array of size max + 1
    int*count = malloc(max+1*sizeof(int));
    for(int i=0;i<=max;i++){
        count[i] = 0;
    }
    for(int i=0;i<size;i++){
        count[arr[i]]++;
    }
    // cumulative sum
    int sum = 0;
    for(int i=0;i<=max;i++){
        count[i] += sum;
        sum = count[i];
    }
    // new array of size : size
    int*output = malloc(size*sizeof(int));
    for(int i=0;i<size;i++){
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    // copy output to initial array
    for(int i=0;i<size;i++){
        arr[i] = output[i];
    }
}
int main(){
    int arr[] = {9,3,4,7,2,7,4,8,1,0};
    int size = sizeof(arr)/sizeof(int);
    CountSort(arr,size);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
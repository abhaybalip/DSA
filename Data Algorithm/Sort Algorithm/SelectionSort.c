// Data Structure - Search&SortAlgorithm - Selection Sort
#include<stdio.h>
#include<stdlib.h>
// Function for Selection Sorting
int*SelectionSort(int*arr,int size){
    for(int i=0;i<size;i++){
        int MinIdx = i;
        for(int j=MinIdx+1;j<size;j++){
            if(arr[MinIdx]>arr[j]){
                MinIdx = j;
            }
        }
        if(MinIdx!=i){
            int Temp = arr[MinIdx];
            arr[MinIdx] = arr[i];
            arr[i] = Temp;
        }
    }
    return arr;
}
void main(){
    int *arr;
    int size;
    printf("Enter Array Size : ");
    scanf("%d",&size);
    arr = (int*)malloc(size*sizeof(int*));
    for(int i=0;i<size;i++){
        printf("Index : %d ",i);
        scanf("%d",&arr[i]);
    }
    int*arr2 = SelectionSort(arr,size);
    printf("Sorted Array : ");
    for(int i=0;i<size;i++){
        printf("%d ",arr2[i]);
    }
}
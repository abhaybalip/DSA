// Data Structure - Search&SortAlgorithm - BubbleSort
#include<stdio.h>
#include<stdlib.h>
// Function for BubbleSorting
int*BubbleSort(int*arr,int size){
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if(arr[i]>arr[j]){
                int Temp = arr[i];
                arr[i] = arr[j];
                arr[j] = Temp;
            }
        }
    }
    return arr;
}
void main(){
    int*arr;
    int size;
    printf("Enter Array Size : ");
    scanf("%d",&size);
    arr = (int*)malloc(size*sizeof(int*));
    for(int i=0;i<size;i++){
        printf("Index : %d ",i);
        scanf("%d",&arr[i]);
    }

    int*arr2 = BubbleSort(arr,size);
    printf("Sorted Array : ");
    for(int i=0;i<size;i++){
        printf("%d ",arr2[i]);
    }
}
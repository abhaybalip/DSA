// Data Structure - Radix Sorting
#include<stdio.h>
#include<stdlib.h>
// function for finding max elememt
int GetMax(int arr[],int size){
    int max = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max) max = arr[i];
    }
    return max;
}
// functionn for count sorting according to radix
int CountSort(int arr[],int size,int place){
    int max = (arr[0] / place) % 10;

    for (int i=0;i<size;i++){
        if (((arr[i]/place) % 10) > max)
            max = arr[i];
    }
    int*count = (int*)malloc(max+1*sizeof(int));
    for(int i=0;i<=max;i++){
        count[i] = 0;
    }
    for(int i=0;i<size;i++){
        count[(arr[i]/place)%10] ++;
    }
    int sum = 0;
    for(int i=0;i<=max;i++){
        count[i] += sum;
        sum = count[i];
    }
    int*output = (int*)malloc(size+1*sizeof(int));
    for(int i=0;i<size;i++){
        output[count[(arr[i]/place)%10] - 1] = arr[i];
        count[(arr[i]/place)%10] --;
    }
    for(int i=0;i<size;i++){
        arr[i] = output[i];
    }
}
// function for radix sorting
int RadixSort(int arr[],int size){
    int max = GetMax(arr,size);
    for(int place=1;max/place>0;place*=10){
        CountSort(arr,size,place);
    }
}
int main(){
    int arr[] = {9,3,4,7,2,7,4,8,1,0};
    int size = sizeof(arr)/sizeof(int);
    RadixSort(arr,size);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
// Data Structure - Search&Sort Algorithm
#include<stdio.h>
#include<stdlib.h>
// function for shell sorting
void ShellSort(int arr[],int size){
    for(int interval=size/2;interval>0;interval /= 2){
        for(int i=interval;i<size;i++){
            int temp = arr[i];
            int j;
            for(j=i;j>=interval && arr[j-interval]>temp;j-=interval){
                arr[j] = arr[j-interval];
            }
            arr[j] = temp;
        }
    }
}
int main(){
    int arr[] = {2,5,1,3,6,4};
    int size = sizeof(arr)/sizeof(int);
    ShellSort(arr,size);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
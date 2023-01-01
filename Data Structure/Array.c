// Data Structure - Array and Pointer
#include<stdio.h>
#include<stdlib.h>
// Function for Printing Array with size
void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    // Array
    int ar[3] = {1,4,2};
    printf("First Array : ");
    PrintArray(ar,3);

    int ar2[] = {5,3,6,4,0,2,6};
    printf("Second Array : ");
    PrintArray(ar2,7);    

    int ar3[5];
    for(int i=0;i<6;i++){
        ar3[i] = i*10;
    }
    printf("Third Array : ");
    PrintArray(ar3,6);
}
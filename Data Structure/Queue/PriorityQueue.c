// Data Structure - Queue - Priority Queue
#include<stdio.h>
#include<stdlib.h>
int size = 0;
// function for swaping data
void swap(int*a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
// function for heaping tree
void heapify(int arr[],int size,int i){
    if(size==1){
        printf("Single element");
    }
    else{
        int largest = i;
        int l = 2*i +1;
        int r = 2*i +2;
        if(l<size && arr[i]>arr[largest]){
            largest = l;
        }
        if(r<size && arr[r]>arr[largest]){
            largest = r;
        }
        if(largest!=i){
            swap(&arr[i],&arr[largest]);
            heapify(arr,size,largest);
        }
    }
}
// function to inssert data in tree
void Insert(int arr[],int num){
    if(size==0){
        arr[0] = num;
        size += 1;
    }
    else{
        arr[size] = num;
        size += 1;
        for(int i=size/2 -1;i>=0;i--){
            heapify(arr,size,i);
        }
    }
}
// function to delete data
void Delete(int arr[],int num){
    int i;
    for(i=0;i<size;i++){
        if(num==arr[i])
            break;
    }
    swap(&arr[i],&arr[size-1]);
    size --;
    for(int i=size/2-1;i>=0;i--){
        heapify(arr,size,i);
    }
}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    
    int array[10];

  Insert(array, 3);
  Insert(array, 4);
  Insert(array, 9);
  Insert(array, 5);
  Insert(array, 2);

  printf("\nMax-Heap array: \n");
  printarray(array, size);

  Delete(array, 4);

  printf("\nAfter deleting an element: \n");

  printarray(array, size);
    return 0;
}
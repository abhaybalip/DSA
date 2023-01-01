#include<stdio.h>
#include<stdlib.h>
void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    // Pointer
    int*Ptr = NULL; // Pointer Variable of int Type
    int num = 999;  // Data Variable of int Type
    Ptr = &num;     // Address of data allocated to pointer

    printf("Pointer Data : %d \n",*Ptr);

    // Dynamic Array using pointer

    // malloc operation
    int *Ptr2 = (int*)malloc(5*sizeof(int*));
    for(int i=0;i<5;i++){
        Ptr2[i] = i*10;
    }
    printf("Pointer Array : ");
    PrintArray(Ptr2,5);

    // realloc operation - reallocates initial pointer to new variable
    int*Ptr3 = (int*)realloc(Ptr2,5*sizeof(int*));
    printf("Reallocated Pointer Array : ");
    PrintArray(Ptr3,5);

    // free operation - used to free memory
    free(Ptr);

    // calloc operation - used to initialise all values to 0;
    int*ptr4 = (int*)calloc(5,sizeof(int));
    PrintArray(ptr4,5);
    
    return 0;
}
/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int counter=0;
int main()
{   
    
    int myarray1[9]={3,9,5,10,17,21,18,20,15};
    //GDB reads the integer 22 incorrectly for some reason, bubble sort is otherwise functional
    int myarray2[9]={12,7,9,3,10,26,5,1};
    int myarray3[9]={3,9,5,10,17,22,18,20,15};
    printf("Bubble Sort\n");
    bubblesort(myarray1,9);
    printf("Selection Sort\n");
    selectionSort(myarray2,9);
    //printf("Insertion Sort\n");
    //insertionSort(myarray3,9);

    return 0;
}
//Sorting requires both supporting swap and print functions
void swap(int* ptrA,int* ptrB){
    int tmp=*ptrA;
    *ptrA=*ptrB;
    *ptrB=tmp;
    counter++;
}
void print(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
//Make sure to always use the & symbol when swapping numbers!!!
//loops through the list,compares i values in the list to their i+1, the winner swaps only if i>i+1.
void bubblesort(int* arr,int n){
    int counter=0;
    for(int i=n;i>0;i--){
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[i]){
                swap(&arr[j],&arr[i]);
                counter++;
            }
        }
        print(arr,n);
    }
    printf("There are %d swaps in total",counter);
    printf("\n\n\n");
}
//Loops through the list, finds the smallest unsorted value, and sorts it one by one.
void selectionSort(int* arr,int n){
    int counter=0;
    for(int i=0;i<n;i++){
        int minIndex=-1;
        int min=arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                minIndex=j;
            }
        }
        if(minIndex!=-1){
            swap(&arr[i],&arr[minIndex]);
            counter++;
        }
        print(arr,n);
        printf("\n Number of swaps is %d\n",counter);
    }
    printf("\n\n\n");
}
void insertionSort(int* arr,int n){
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]>=arr[j-1]){
                break;
            }
            swap(&arr[j],&arr[j-1]);
            
            
        }
        print(arr,n);
    }
}




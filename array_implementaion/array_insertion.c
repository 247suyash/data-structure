#include <stdio.h>
void display(int arr[],int size){
 for (int i=0; i<size; i++)
 {
    printf(" %d ", arr[i]);
 }
 printf("\n");
 
}

int indinsertion(int arr[], int size, int elemnt , int capacity , int index){
  if(size>=capacity){
     return -1;
  }
  for(int i= size-1; i>=index; i--){
    printf("%d" , arr[i]);
    printf("\n");
    arr[i+1] = arr[i] ;
  }
  arr[index] = elemnt;
  return 1;   
} 

void main (){
    int arr[100] ={10,20,30,50,60};
    int size = 5,index=3,element=45;
    display(arr , size);
    indinsertion(arr,size,element,100,index);
    size +=1 ;
    display(arr,size);
    // return 0;
}
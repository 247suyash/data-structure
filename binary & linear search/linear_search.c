#include <stdio.h>

int linearSearch(int arr[],int size,int element){
    for(int i=0; i<size; i++ ){
        if(arr[i]==element)
        return i;
    }
    return -1 ;
}
void main(){
    int arr[]={1,2,3,4,5,6,7,6,4};
    int size = sizeof(arr)/sizeof(int);
    int element = 5;
    int searchElement= linearSearch(arr, size,element);
    printf("element %d present on index %d", element , searchElement);

}
#include<stdio.h>
int linearsearch(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

int binarysearch(int arr[],int size,int element){
    int low=0;
    int mid;
    int high=size-1;
    for(low=0;low<=high;low++){
        mid=(low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
        else if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
}

void main(){
    // Unsorted array for linear seaarch
    // int arr[]={34,46,67,78,24,89,33,64,79};
    // int size=sizeof(arr)/sizeof(int);

    //Sorted array for binary search    
    int arr[]={34,46,67,78,244,809,3333,6445,7956};
    int size=sizeof(arr)/sizeof(int);
    int element;
    printf("Enter search element:");
    scanf("%d",&element);
    int search=linearsearch(arr, size, element);
    printf("The element found at the index %d",search);
}
#include<stdio.h>
void main(){
    int arr[100],size,i;

    printf("Enter size of an array:");
    scanf("%d",&size);
    printf("Enter element:\n");

    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++){
        if(arr[0]>arr[i]){
            arr[0]=arr[i];
        }
    }
    printf("Lowest element:%d\n",arr[0]);

    for(i=0;i<size;i++){
        if(arr[0]<arr[i]){
            arr[0]=arr[i];
        }
    }
    printf("Largest element:%d",arr[0]);

}
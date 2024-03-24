//sort the given array into ascending order

#include<stdio.h>
void main(){
  int arr[5],size,i,j;

  printf("Enter the length of an array:");
  scanf("%d",&size);

  printf("Enter array element:");

  for(i=0;i<size;i++){
            scanf("%d",&arr[i]);
  }
  for(i=0;i<size;i++){
      for(j=i+1;j<size;j++){
        if(arr[i]>arr[j]){
            int temp= arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
      }
  }

  printf("The output value is:\n");
  for(i=0;i<size;i++){
    printf("%d\n",arr[i]);
  }

}
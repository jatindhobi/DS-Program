//write the program t search an element in to array

#include<stdio.h>

void main(){
  int arr[]={1,2,3,4,5,6,7,8,9};
  int n1;
  printf("Enter search element:");
  scanf("%d",&n1);

  for(int i=0;i<=8;i++){
    if(n1==arr[i]){
      printf("Number found at %d index",arr[i]);
      break;
    }
  }
  for(int i=0;i<=8;i++){
    if(n1!=arr[i]){
      printf("Number not found");
      break;
    }
    
  }
}
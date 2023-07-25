#include<stdio.h>



void main(){
    int n,i;
    printf("Enter Size:");
    scanf("%d",&n);
    int rev[n];
    printf("Enter element");
    for(i=0;i<n;i++){
        scanf("%d",&rev[i]);
    }
    printf("Reverse:\n");
    for(i=0;i<n;i++){
        rev[n - i] = rev[i];
    }
    for(i=0;i<n;i++){
        printf("%d ",rev[i]);
    }
}
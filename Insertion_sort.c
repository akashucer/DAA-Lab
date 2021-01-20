//5.	Write a program in C to implement Insertion Sort.
#include<stdio.h>
void main(void){
    int arr[10],i,j,temp,key;
    printf("\nEnter the Elements in the Array :");
    for(i = 0;i<10;i++){
        printf("\nEnter the %d value :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nArray before Sorting  :");
    for(i = 0;i<10;i++){
        printf(" %d ",arr[i]);
    }
    for(i = 1;i<10;i++){
         key = arr[i];
         for(j = i-1;j>=0 && arr[j]>key;j--){
             arr[j+1] = arr[j];
         }
         arr[j+1] = key;
    }
    printf("\nArray After Sorting  :");
    for(i = 0;i<10;i++){
        printf(" %d ",arr[i]);
    }
}
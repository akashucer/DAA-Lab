// 3.	Write a program in C to implement Bubble Sort.
#include<stdio.h>
void main(void){
    int arr[10],i,j,temp;
    printf("\nEnter the Elements in the Array :");
    for(i = 0;i<10;i++){
        printf("\nEnter the %d value :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nArray before Sorting  :");
    for(i = 0;i<10;i++){
        printf(" %d ",arr[i]);
    }
    printf("\nArray After Sorting :");
    for(i = 0;i<10;i++){
        for(j= 0; j<9;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    for(i = 0;i<10;i++){
        printf(" %d ",arr[i]);
    }
}
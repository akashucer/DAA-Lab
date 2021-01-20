// 8.	Write a program in C to implement Counting Sort.

#include<stdio.h>

void counting_sort(int arr[],int n,int max){
    int count[10],i,j;
    for(i=0;i<10;i++){
        count[i] = 0;
    }
    for(i=0;i<n;i++){
        count[arr[i]] = count[arr[i]]+1;
    }
    printf("\nSorted Array :");
    for(i=0;i<=max;i++){
        for(j=1;j<=count[i];j++){
            printf(" %d ",i);
        }
    }
}


void main(void){
    int arr[10],n,i,max = 0;
    printf("\nEnter No. of Elements :");
    scanf("%d",&n);
     printf("\nEnter the Elements in the Array :");
    for(i = 0;i<n;i++){
        printf("\nEnter the %d value :",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max = arr[i];
        }
    }
    counting_sort(arr,n,max);
}
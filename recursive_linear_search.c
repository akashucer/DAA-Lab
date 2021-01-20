#include<stdio.h>
#include<stdlib.h>
int linear_search(int arr[],int n,int key){
    if(n<1){
        return 0;
    }
    else{
        linear_search(arr,n-1,key);
        if(arr[n-1]==key){
            printf("Found %d at %d",key,n);
            exit(0);
        }
    }
    return 0;
}
void main(void){
    int arr[50],n,i,key,pos;
    printf("\nEnter the length of array :");
    scanf("%d",&n);
    printf("\n Enter Elements in array :");
    for(i=0;i<n;i++)
     {
         printf("Enter %d Element :",i+1);
         scanf("%d",&arr[i]);
     }
     printf("\nEnter key for searching :");
     scanf("%d",&key);
     pos = linear_search(arr,n,key);
     if(pos==0){
         printf("\nElement not found ");
     }
}
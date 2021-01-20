//7.	Write a program in C to implement Merge Sort.

#include <stdio.h>
#include <stdlib.h>

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]

//Merge Function
void merge(int arr[], int low, int mid, int high)
{
	int i, j, k;
	int n1 = mid - low + 1;
	int n2 = high - mid;  
	/* create temp arrays */
	int L[n1], R[n2];

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++)
		L[i] = arr[low + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[mid + 1 + j];

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = l; // Initial index of merged subarray
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	/* Copy the remaining elements of L[], if there
	are any */
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	/* Copy the remaining elements of R[], if there
	are any */
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(int arr[], int low, int high)
{
	if (low < high) {
		// Same as (l+r)/2, but avoids overflow for
		// large l and h
		int mid = low + (high - low) / 2;

		// Sort first and second halves
		mergeSort(arr, low, mid);
		mergeSort(arr, mid + 1, high);

		merge(arr, low, mid, high);
	}
}


/* Function to print an array */
void printArray(int A[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", A[i]);
	printf("\n");
}

//Main Block
int main()
{
	int arr[10],i;
    int arr_size = sizeof(arr) / sizeof(arr[0]);
	printf("\nEnter the Elements in the Array :");
    for(i = 0;i<10;i++){
        printf("\nEnter the %d value :",i+1);
        scanf("%d",&arr[i]);
    }

	printf("Given array is \n");
	printArray(arr, arr_size);

	mergeSort(arr, 0, arr_size-1);

	printf("\nSorted array is \n");
	printArray(arr, arr_size);
	return 0;
}

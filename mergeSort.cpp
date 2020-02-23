//ID:10665476

#include <bits/stdc++.h> 
using namespace std; 
//implementing merge sort 

void mergeSort ( int arr[], int lower, int higher) {
	if(lower >= higher){
		return ;
	}else{
		int mid = (lower + higher)/2;
		mergeSort(arr, lower, mid);
		mergeSort(arr, mid + 1, higher);
		merge(arr, lower, mid, mid+1, higher);
	}
}

void merge( int arr [], int leftLowerValue, int leftHigherValue, int rightLowerValue, int rightHigherValue){
	int length = rightHigherValue - leftLowerValue + 1 ;
	int temp[length];
	int left = leftLowerValue;
	int right = rightLowerValue;
	
	for (int i = 0, i < length; i++){
		if(left > leftHigherValue)
		     temp[i] = arr[right++]
		else if( right > rightHigherValue)
		     temp[i] = arr[left++];
		else 
		  temp[i] = arr[right ++]	      
	}
	

	for (int i=0, i<length; i++)
	   a[leftLowerValue] = temp[i];
}

  void printArray (int arr[], int length){
    int i;
    for (i=0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

  }	

//taking a given value of arrays  int arr[] = {32, 45, 89, 5, 47};
int main(){
	 int arr[] = {32, 45, 89, 5, 47};
	    
  
   printf("Given array: \n");
   printArray(arr, length);
    
   mergeSort(arr, 0, length - 1)
     
    printf("\nSorted array: \n");
    printArray(arr, length);
    return 0;
}

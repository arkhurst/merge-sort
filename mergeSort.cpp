//ID:10665476

//implementing merge sort in c++
#include <iostream>;
using namespace std;


int merge( int arr [], int leftLowerValue, int leftHigherValue, int rightLowerValue, int rightHigherValue){
	int length = rightHigherValue - leftLowerValue + 1 ;
	int temp[length];
	int left = leftLowerValue;
	int right = rightLowerValue;
	
	for (int i = 0; i < length; i++){
		if(left > leftHigherValue){
			temp[i] = arr[right++];
		}else if ( right > rightHigherValue){
		
		     temp[i] = arr[left++];
		}
		else {
			  temp[i] = arr[right ++];	
		}
		      
	}
	

	for (int i=0; i<length; i++)
	   arr[leftLowerValue] = temp[i];
}

  int printArray (int arr[], int length){
    int i;
    for (i=0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

  }	
  
  int mergeSort ( int arr[], int lower, int higher) {
	if(lower >= higher){
		return 0 ;
	}else{
		int mid = (lower + higher)/2;
		mergeSort(arr, lower, mid);
		mergeSort(arr, mid + 1, higher);
		merge(arr, lower, mid, mid+1, higher);
	}
}

//taking a given value of arrays  int arr[] = {32, 45, 89, 5, 47};
int main(){
	 int array[] = {1,3,5,8,2,4};
	 int length = 6  ;
  
   printf("Given array: \n");
   printArray(array,length);
    
   mergeSort(array, 0, length - 1);
     
    printf("\nSorted array: \n");
    printArray(array, length);
    return 0;
}

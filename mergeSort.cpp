//ID:10665476

//implementing merge sort in c++
#include <iostream>;
using namespace std;


int merge( int arr [], int leftLowerValue, int leftHigherValue, int rightLowerValue, int rightHigherValue){
	int length = rightHigherValue - leftLowerValue + 1 ;
	int temp[length];
	int left = leftLowerValue;
	int right = rightLowerValue;
	
	for (int i = 0; i < length; ++i){
		if(left > leftHigherValue){
			temp[i] = arr[right++];
		}else if ( right > rightHigherValue){
		
		     temp[i] = arr[left++];
		}
		else {
			  temp[i] = arr[right ++];	
		}
		      
	}
	

	for (int i=0; i<length; ++i)
	   arr[leftLowerValue++] = temp[i];
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


  int printArray (int arr[], int length){
    int i;
    for (i=0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

  }	

//taking a given value of arrays  int arr[] = {};
int main(){
	 int arr[] = {1,0,3,4,5};
	 int length = 5 ;
  
   printf("Given array: \n");
   printArray(arr,length);
     
    printf("\nSorted array: \n");
     mergeSort(arr, 0, length - 1);
     cout<<"The Sorted List is\n";
    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

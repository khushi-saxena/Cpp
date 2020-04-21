#include<iostream>

using namespace std;

void bubbleSort(int arr[],int size)

{

	int minIndex;
	int temp;
	for( int i= 0; i<size-1 ; i++)
	{
		minIndex = i;
		for( int j =0; j<size-1 ;j++)
		{
			if( arr[j]> arr[j+1])
		
				 temp = arr[j];
				 arr[minIndex] = arr[j+1];
				 arr[j+1]= temp;
		}		 
	}

}

void printArray (int arr[],int size)
{
	for(int i =0;i< size; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int main()

{
	int arr[] = { 6,5,4,2,3,1,7};
	int size = sizeof(arr)/sizeof(int);
	

	 cout<<"unsorted array is: ";

	 printArray(arr,size);
	

	bubbleSort(arr,size);


	 cout<<"\nsorted array is: ";
     printArray(arr,size);
		

	return 0;
}

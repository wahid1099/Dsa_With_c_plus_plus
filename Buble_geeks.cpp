// C++ program for implementation
// of Bubble sort
#include <bits/stdc++.h>
using namespace std;


// Function to print an array
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		// Last i elements are already
		// in place
		for (j = 0; j < n - i - 1; j++){
             cout << "-----------------------------"<<endl;
            printArray(arr,n);
            // int arr[] = { 7, 2, 13 ,2 ,11, 4};
            //cout<<"value of js is : "<<arr[j]<<endl;
             cout << "-----------------------------";
            if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
        }
       
			
}



// Driver code
int main()
{
	int arr[] = { 7, 2, 13 ,2 ,11, 4};
	int N = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, N);
	cout << "Sorted array: \n";
	printArray(arr, N);
	return 0;
}
// This code is contributed by rathbhupendra

#include<iostream>
using namespace std;
int main()
{
    // sum of elements in the array

	int size_of_array; // size
	cin >> size_of_array; // size input

	int array[size_of_array]; // array declaration

	// array input
	for(int i=0;i<size_of_array;i++){
		cin >> array[i];
	}

	int sum = 0; // intially

	// array traversal and adding each element to the variable
	for(int i=0;i<size_of_array;i++){// 0 -> size-1
		sum = sum + array[i]; // element at ith index
		// sum += arr[i];
	}

    cout<<sum<<endl;


}
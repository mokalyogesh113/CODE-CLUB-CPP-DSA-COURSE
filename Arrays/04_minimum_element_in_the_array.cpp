#include<iostream>
using namespace std;
int main()
{
    // finding the minium element

    // input
	int size;
	cin >> size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin >> arr[i];
	}

	// variable to store the minimum element of the array
	int current_minimum = arr[0]; // initialize?? => arr[0], INT_MAX
	// 2 ^ (31) - 1

	// traversal
	// comapre each element with current minimum and store if it is less than minium
	// 1, 2, 3, 4, 5 currmx = 5
	// 0 1  2  3  4

	for(int i=0;i<size;i++){
		if(arr[i] < current_minimum){
			current_minimum = arr[i];
		}
	}

	cout << current_minimum << endl;
    
}
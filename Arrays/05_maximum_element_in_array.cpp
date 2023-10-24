#include<iostream>
using namespace std;
int main()
{
    // finding the maximum element

    // input
	int size;
	cin >> size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin >> arr[i];
	}

	// variable to store the maximum element of the array
	int current_maximum = arr[0]; // initialize?? => arr[0], INT_MIN\
	// - 2 ^ (31)

	// traversal
	// comapre each element with current maximum
	// 1, 2, 3, 4, 5 currmx = 5
	// 0 1  2  3  4

	for(int i=0;i<size;i++){
		if(arr[i] > current_maximum){
			current_maximum = arr[i];
		}
	}

	cout << current_maximum << endl;

}
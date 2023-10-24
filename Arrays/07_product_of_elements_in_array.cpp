#include<iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;

    int arr[size];

    // input
    for(int i=0;i<size;i++){
    	cin >> arr[i];
    }

    // product variable intialization
    int product = 1;

    // travesal
    for(int i=0;i<size;i++){
    	product = product * arr[i];
    }

    cout << product << endl;
}
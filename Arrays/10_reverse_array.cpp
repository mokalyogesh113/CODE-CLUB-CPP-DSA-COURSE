// you have to input array with size n
// print the array in reverse order

// arr[5] = {5, 4, 7, 9, 1}

// output:-
// arr[5] = {1, 4, 7, 9, 5}

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    // i index from 0 & j index from n &swap the elements
    int i = 0;
    int j = n-1;
    while(i < j) 
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;  
    }

    for(int i=0 ; i<n ;i++)
    {
        cout<<arr[i]<<" ";
    }

}







1. maximum element in the array
2. second max element in the array
3. INT_MAX , INT_MIN --> use climits header file
4. Print the array in reverse order
5. reverse the array



arr[5] = { 5,4,7,9,1}

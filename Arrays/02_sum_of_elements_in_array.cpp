// How to find the sum of values in an array in C++

#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter the size of the array ==> ";
    cin>>n;         

    int arr[n];
    cout<<"Enter  numbers ==> \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int sum = 0;        // To store the sum of all elements
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }

    cout<<"\nsum of all elements is ==> "<<sum<<endl;



}
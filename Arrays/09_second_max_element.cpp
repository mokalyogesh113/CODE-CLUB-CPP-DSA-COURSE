#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n]; 
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    // logic to find max
    int max = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > max) 
        {
            max = arr[i];
        }
    }
    
    int secondMax = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i] < max && arr[i] > secondMax) {
            secondMax = arr[i];
        }
    }

    cout<<secondMax<<endl;


}
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

    // for(k)  --> to print k Pyramids
    //   for(i) & for(j)  --> to print the kth pyramid


    for(int k = 0; k<n;k++)
    {
        for(int i=k;i<n;i++)
        {
            int sum = 0;
            for(int j = k ;j<=i;j++)
            {
                cout<<arr[j]<<" ";
            }
            cout<<"   --> "<<sum;
            cout<<endl;
        }
    } 
}

/*

Input:  
    n = 5
    arr[] = {1 2 3 4 5};

Output:
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    2 
    2 3
    2 3 4
    2 3 4 5
    3 
    3 4 
    3 4 5
    4
    4 5
    5


    total number of subarrays --> n*(n-1) / 2

*/
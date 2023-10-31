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
    for(int k = 0; k<n;k++)
    {
        for(int i=k;i<n;i++)
        {
            for(int j = k ;j<=i;j++)
            {
                cout<<arr[j]<<" ";
            }
            cout<<endl;
        }
    } 
}
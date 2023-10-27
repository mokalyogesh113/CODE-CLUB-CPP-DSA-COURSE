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
                sum = sum + arr[j];
            }
            cout<<"   --> "<<sum;
            cout<<endl;
        }
    } 
}
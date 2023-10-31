#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];

    int maxSum = INT_MIN ;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int k = 0; k<n;k++)
    {
        for(int i=k;i<n;i++)
        {
            int sum = 0;
            for(int j = k ;j<=i;j++)
            {
                sum = sum + arr[j];
            }
            if(sum>maxSum){
                maxSum = sum;
            }
        }
    } 

    cout<<maxSum;
    
}




print all possible subarrays of the array
print sum of all possible subarrays in the array
print max_sum of subarray using o(n^3)
print max_sum of subarray using o(n^2)



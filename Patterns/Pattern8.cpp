// Pattern 8
//      123456789
// 1    *********
// 2     *******
// 3      *****
// 4       ***
// 5        *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // space
        for(int j = 1; j<= i-1 ;j++)
        {
            cout<<" ";
        }
        // stars
        for(int j = 1 ;j<=(2*n - 2*i + 1) ;j++)
        {
            cout<<"*";
        }
        // space
        for(int j = 1; j<= i-1 ;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
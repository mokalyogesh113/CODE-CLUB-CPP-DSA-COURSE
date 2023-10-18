// Pattern 9
// n = 5

//         *
//        ***
//       *****
//      *******
//     *********
//     *********
//      *******
//       *****
//        ***
//         *

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    // Upper Pattern
    for (int i = 1; i <= n; i++)
    {
        // Space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // Stars
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        // Space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    // Lower Side Pattern
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

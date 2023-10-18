// pattern 5
//      1 2 3 4 5
// 1    * * * * *
// 2    * * * *
// 3    * * *
// 4    * *
// 5    *

//     n = 5

//     i  j    (5 - i + 1)
//     1  5      5
//     2  4      4
//     3  3      3
//     4  2
//     5  1

// Formula for j ==> (n-i + 1)

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j = 1; j <= (n - i +1) ;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
// Pattern 11

// 1    1
// 2    0 1
// 3    1 0 1
// 4    0 1 0 1
// 5    1 0 1 0 1

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    for(int i=1;i<=n;i++)    // n times
    {
        x = i%2==0 ? 0 : 1;
        for(int j =1; j <=i  ;j++)    //
        {
            cout<<x<<" ";
            // x = x==0 ? 1 : 0;
            x ^=1;
            // x = x^1;
        }
        cout<<endl;
    }

}



// Pattern 2

//     n = 5;

// i  j 1 2 3 4 5
// 1    *
// 2    * *
// 3    * * *
// 4    * * * *
// 5    * * * * *

// no of stars = row number (i.e i)

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)    // n times
    {
        for(int j =1; j <=i  ;j++)    //
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}
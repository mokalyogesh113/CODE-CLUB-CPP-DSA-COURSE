// Pattern 10

//    n = 5;

//     *
//     * *
//     * * *
//     * * * *
//     * * * * *
//     * * * *
//     * * *
//     * *
//     *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // Upper side  // n = 5
    //     *
    //     * *
    //     * * *
    //     * * * *
    //     * * * * *

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Lower Side
    //     * * * *
    //     * * *
    //     * *
    //     *


    n--; // n = 4
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1  ; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

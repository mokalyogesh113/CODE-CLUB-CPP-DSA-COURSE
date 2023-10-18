// Pattern 7
//     n = 5
//      123456789
// 1        *
// 2       ***
// 3      *****
// 4     *******
// 5    *********

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

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
}
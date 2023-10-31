/*
what is transpose ?

1 2 3 4
4 5 6 7

-->

1 4
2 5
3 6
4 7
*/

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    int transpose[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            transpose[i][j] = mat[j][i];
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }

    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<transpose[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}
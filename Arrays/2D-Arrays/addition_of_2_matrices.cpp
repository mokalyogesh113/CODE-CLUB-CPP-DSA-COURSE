// addition of 2 matrices
    // required 2 matrices
    // no of rows & no. of columns should be equal in matrices

#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int mat1[n][m];
    int mat2[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j= 0;j<m;j++)
        {
            cin>>mat1[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j= 0;j<m;j++)
        {
            cin>>mat2[i][j];
        }
    }

    int mat3[n][m];     //used to store the addition of mat1 & mat2

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Print the matrix
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<mat3[i][j]<<" ";
        }
        cout<<endl;
    }

    



}
#include <iostream>
using namespace std;
int main()
{

    // 1 2 3 4
    // 5 6 7 8
    // 9 10 11 12
    // 13 14 15 16
    // 17 18 19 20

    // size --> 5 rows   & 4 columns

    // syntax
    // datatype var_name[n][m];      n -> number of rows   m -> number of Columns
    // Example
    // int arr[10][20];

    // Why to use 2D arrays
    // Used in machine learning to store datasets
    // used in Dynamic Programming
    // used to represent graphs

    // Declare 2d array
    // int arr[2][3];

    // int a[5] = {1 , 2 , 3 , 4 , 5};

    int arr[4][5] = {{1, 2, 3, 4, 5},
                     {4, 5, 6, 7, 8},
                     {5, 6, 7, 8, 9},
                     {6, 7, 8, 9, 10}};

    // // Scan Array from user

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin>>arr[i][j];
    //     }
    // }

    // How to print 2-D array
    // cout << "You have Entered the following 2D arrays \n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    // basic arithematic operations on matrices
    // 1. Addition of matrices
    // 2. Multiplication of matrices
    // 3. transpose


    // addition of 2 matrices
    // required 2 matrices

    
    


}
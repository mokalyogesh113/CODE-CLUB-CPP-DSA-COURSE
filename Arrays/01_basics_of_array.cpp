// Arrays

/*
    - Collecttion of similar data types
    - Linear data structure 
    - contiguous memory allocation
    - static datatype
    - static memory allocation
*/


#include<iostream>
using namespace std;
int main()
{
    /*
    1) syntax for array declaration
            data_type array_name[size of the array];
        Example
            int nos[5];
    
    2) How to assign values in array
        Method - 1
            int arr[5] = {1, 2, 3, 4, 5};

        Method - 2
            int arr[5];

            arr[0] = 1;
            arr[1] = 2;
            arr[2] = 3;
            arr[3] = 4;
            arr[4] = 5;


        Method - 3 --> take input from array

            int arr[5];
            for(int i=0;i<5;i++) {
                cin>>arr[i];
            }

    */

    // Program to take input from user and store it in array and print the elements
    
    int nos[5];
    
    cout<<"Enter the 5 numbers ";
    for(int i=0;i<=4;i++)
    {
        cin>>nos[i];
    }

    cout<<"you have entered following 5 numbers";
    for(int i=0;i<=4;i++)
    {
        cout<<nos[i]<<endl;
    }
}



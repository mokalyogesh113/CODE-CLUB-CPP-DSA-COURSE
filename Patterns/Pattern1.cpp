
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for( int i = 1; i<=n   ; i++ )
    {
        for(int j =1 ; j<=n ;j++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
}

/*

given:
    rows 5
    cols 3

    * * *
    * * *
    * * *
    * * *
    * * *

rows --> outer loop
columns --> inner loop



#include<iostream>
using namespace std;
int main()
{
    int rows = 5;
    int cols = 3;

    for(int i=1; i<=row ; i++)
    {
        for(int j=1;j <=cols ; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}


*/
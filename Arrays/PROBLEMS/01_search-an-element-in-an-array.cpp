PROBLEM LINK:- https://practice.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions


int search(int arr[], int N, int X)
{
    
    for(int i=0;i<N;i++)
    {
        if(arr[i] == X)
        {
            return i;
        }
    }

    return -1;
}
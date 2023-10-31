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


int missingNumber(int A[], int N)
{
    int present[N+1];
    
    for(int i=1;i<=N;i++){ present[i] = 0;  }
    
    for(int i=0;i<N-1;i++)
    {
       int x = A[i];
       present[x] = 1;
    }
    
    for(int i=1 ; i<N+1 ; i++)
    {
       if(present[i] == 0)
      {
        return i;
      }
    }

    return -1;
}
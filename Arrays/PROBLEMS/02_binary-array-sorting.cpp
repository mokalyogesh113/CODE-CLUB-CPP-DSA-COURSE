PROBLEM LINK:- https://practice.geeksforgeeks.org/problems/binary-array-sorting-1587115620/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions

void binSort(int arr[], int N)
    {
       int count0 = 0;
       int count1 = 0;
       
       for(int i=0;i<N;i++)
       {
           if(arr[i] == 0){
               count0++;
           } else{
               count1++;
           }
       }
       
       for(int i=0;i<count0 ; i++)
       {
           arr[i] = 0;
       }
       for(int i = count0 ; i<N;i++)
       {
           arr[i] = 1;
       }   
    }
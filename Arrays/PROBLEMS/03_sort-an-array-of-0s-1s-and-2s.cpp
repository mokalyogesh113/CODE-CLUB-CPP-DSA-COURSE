PROBLEM LINK :- https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1?page=1&difficulty[]=0&category[]=Arrays&sortBy=submissions

void sort012(int a[], int n)
    {
        
        int cnt0 = 0 , cnt1 = 0, cnt2 = 0;
        for(int i=0;i<n;i++)
        {
            if( a[i] == 0 ){
                cnt0++;
            } else if(a[i] == 1) {
                cnt1++;
            } else {
                cnt2++;
            }
        }
        
        // assign first count0 elemets as 0
        for(int i=0;i<cnt0;i++){
            a[i] = 0;
        }
        
        // Assign next count1 elements as 1
        for(int i=cnt0 ; i<cnt0+cnt1 ; i++)
        {
            a[i] = 1;
        }
        
        for(int i = cnt0 + cnt1 ; i<n; i++)
        {
            a[i] = 2;
        }
    }
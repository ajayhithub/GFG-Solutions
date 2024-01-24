//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int A[], int start, int mid, int end)
    {
         // Your code here
        // sort(arr+l,arr+r+1);
      int p = start , q = mid+1;

    int Arr[end-start+1] , k=0;

    for(int i = start;i <= end ;i++) 
    {
       if(p > mid)
       Arr[ k++ ] = A[ q++] ;
       else if ( q > end)   
       Arr[ k++ ] = A[ p++ ];
       else if( A[ p ] < A[ q ])     
       Arr[ k++ ] = A[ p++ ];
       else
        Arr[ k++ ] = A[ q++];
   }
   
    for (int p=0 ; p< k ;p ++) 
     {
       A[start++] = Arr[p] ;                          
     }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if (l >= r)
        return;
 
        int mid = l + (r-l)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends
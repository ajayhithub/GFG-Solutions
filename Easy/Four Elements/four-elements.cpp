//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

bool find4Numbers(int A[], int n, int X);

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, x;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin>>x;
        cout << find4Numbers(a, n, x) << endl;

    }
    return 0;
}
// } Driver Code Ends


//User function Template for C++

bool find4Numbers(int A[], int n, int X)  
{
    
    sort(A,A+n);
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           int k = j+1;
           int end = n-1;
           unordered_map<int,int> mpp;
           mpp[A[k]] = 1;
           while(k<end)
           {
             if(mpp[X-(A[i]+A[j]+A[end])] != 0)
              return true;
              else if(A[i]+A[j]+A[k]+A[end] < X)
              k++;
              else if(A[i]+A[j]+A[k]+A[end] > X)
              end--;
             
              mpp[A[k]] = 1;
           }
           
        }
    }
    return false;
    
}
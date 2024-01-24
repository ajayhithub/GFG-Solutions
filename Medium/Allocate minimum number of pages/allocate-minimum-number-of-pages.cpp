//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    
    int fun(int A[],int page,int N)
    {
        int cnt = 1;
        int pag = 0;
        for(int i=0;i<N;i++)
        {
             if(pag+A[i]<=page)
             {
                pag += A[i];
             }
             else
             {
                 cnt++;
                 pag = A[i];
             }
        }
        
        return cnt;
    }
    
    int findPages(int A[], int N, int M) 
    {
        //code here
        if(M>N)
        return -1;
        else if(M==N)
        {
            int mn = 0;
            for(int i=0;i<N;i++)
            {
                mn = max(mn,A[i]);
            }
            return mn;
        }
        else
        {
           int sum = 0;
           int mx = 0;
           for(int i=0;i<N;i++)
           {
             sum += A[i];
             mx = max(mx,A[i]);
           }
           
         //  sort(A,A+N);
           while(mx<=sum)
           {
               int mid = (mx+sum)/2;
               int cnt = fun(A,mid,N);
               if(cnt>M)
               mx = mid+1;
               else
               sum = mid-1;    
           }
           
            return mx;
        }
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends
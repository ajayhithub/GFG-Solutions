//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
  int fun(int A[], int N,int i ,vector<int> &dp)
  {
      if(i>=N-1)
      return 1;
      if(A[i]==0)
      return 0;
      if(dp[i]!=-1)
      return dp[i];
      int l=0;
     for(int j=1;j<=A[i];j++)
     {
        if( fun(A,N,i+j,dp))
        {
         dp[i] = 1;
         return 1;
        }
         
         
     }
    return 0;
  }
  
  
    int canReach(int A[], int N) {
        // code here
        vector<int> dp(N+1,-1);
      return fun(A,N,0, dp);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}
// } Driver Code Ends
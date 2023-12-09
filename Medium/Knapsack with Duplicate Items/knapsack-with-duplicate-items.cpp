//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

   int fun(int i, int w, int val[], int wt[],vector<vector<int>> &dp)
   {
      if(i<0)
      return 0;
      if(w==0)
      return 0;
      if(dp[i][w]!=-1)
      return dp[i][w];
      
      int non = fun(i-1,w,val,wt,dp);
      int tak = -1e9;
      if(wt[i]<=w)
      tak = val[i] + fun(i,w-wt[i],val,wt,dp);
      
      return dp[i][w] = max(non,tak);
   }
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        vector<vector<int>> dp(N+1,vector<int>(W+1,-1));
        return fun(N-1,W,val,wt,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends
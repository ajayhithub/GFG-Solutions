//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

 bool fun(int arr[], int sum, int i,int n, vector<vector<int>> &dp)
{
    if(sum == 0)
    return true;
    if(sum < 0)
    return false;
    if(i>=n)
    return false;
    if(dp[i][sum] != -1)
    return dp[i][sum];
    
    bool l = fun(arr,sum-arr[i],i+1,n,dp);
    bool r = fun(arr,sum,i+1,n,dp);
    
    dp[i][sum] = (l||r);
    return (l||r);
}

    int equalPartition(int N, int arr[])
    {
        // code here
        int summ = 0;
        for(int i=0;i<N;i++)
          summ += arr[i];
        
        if(summ%2 != 0)
        return 0;
        
        int sum = summ/2;
      vector<vector<int>> dp(N,vector<int>(sum+1,-1));
      return   fun(arr,sum,0,N,dp);  
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends
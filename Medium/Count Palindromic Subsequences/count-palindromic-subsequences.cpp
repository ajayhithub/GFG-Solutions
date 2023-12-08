//{ Driver Code Starts
// Counts Palindromic Subsequence in a given String
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete below method */
    long long dp[1001][1001];
    int mod = 1e9+7;
    long long int fun(int i, int j, string &str)
    {
      //  cout<<i<<" "<<j<<endl;
        
        if(i>j)
        return 0;
        if(dp[i][j]!=-1)
        return dp[i][j];
    
    
        if(str[i]==str[j])
        return dp[i][j] = (1+fun(i+1,j,str)+fun(i,j-1,str))%mod;
        else
        return dp[i][j] = (mod + fun(i,j-1,str)+fun(i+1,j,str)-fun(i+1,j-1,str))%mod;
        
    }
    
    long long int  countPS(string str)
    {
       //Your code here
        int n = str.size();
        memset(dp,-1,sizeof(dp));
        return fun(0,n-1,str);
         
    }
     
};

//{ Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        Solution ob;
        long long int ans = ob.countPS(str);
        cout<<ans<<endl;
    } 
}
// } Driver Code Ends
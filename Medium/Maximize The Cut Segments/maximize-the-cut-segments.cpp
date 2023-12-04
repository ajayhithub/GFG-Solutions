//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of cuts.
    
    int fun(int n, int x, int y, int z, vector<int> &dp)
    {
        if(n==0)
        return 1;
        if(n<0)
        return -1e8;
        if(dp[n]!=-1)
        return dp[n];
        
       return dp[n] = 1+max(fun(n-x,x,y,z,dp),max(fun(n-y,x,y,z,dp),fun(n-z,x,y,z,dp)));
    
    }
    
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        vector<int> dp(n+1,-1);
        int ans = fun(n,x,y,z,dp)-1;
        if(ans<=0)
        return 0;
        else
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends
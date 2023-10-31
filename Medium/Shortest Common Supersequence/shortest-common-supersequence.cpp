//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    
    int fun(string X, string Y, int m, int n, vector<vector<int>> &dp)
    {
        if(m<0 || n<0)
        return 0;
        if(dp[m][n]!=-1)
        return dp[m][n];
        
        int l = max(fun(X,Y,m-1,n,dp),fun(X,Y,m,n-1,dp));
        int r = 0;
        if(X[m]==Y[n])
        r = 1+fun(X,Y,m-1,n-1,dp);
        
        dp[m][n] = max(l,r);
        return max(l,r);
    }
    
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        //code here
        vector<vector<int>> dp(m+1,vector<int>(n,-1));
        int t = fun(X,Y,m-1,n-1,dp);
        
        return t+(m-t)+(n-t);
    }
};

//{ Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}


// } Driver Code Ends
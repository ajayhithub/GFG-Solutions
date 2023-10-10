//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		
	public:
	
	int fun(int i, int j, int A[], int B[],vector<vector<int>> &dp)
	{
	    if(j<0)
	    return 0;
	    if(i<0)return INT_MIN;
	    if(dp[i][j]!=-1)
	    return dp[i][j];
	    
	    int l = (A[i]*B[j]) + fun(i-1,j-1,A,B,dp);
	    int r = fun(i-1,j,A,B,dp);
	    
	  //cout<<l<<"A"<<r<<endl;
	  dp[i][j] = max(l,r);
	    return max(l,r);
	}
	
	int maxDotProduct(int n, int m, int A[], int B[]) 
	{ 
		// Your code goes here
		vector<vector<int>> dp(n,vector<int>(m,-1));
		return fun(n-1,m-1,A,B,dp);
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int a[n], b[m];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

        for(int i = 0; i < m; i++)
        	cin >> b[i];

       

	    Solution ob;
	    cout << ob.maxDotProduct(n, m, a, b) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends
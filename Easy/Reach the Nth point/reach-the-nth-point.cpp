//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
	 int fun(int n, vector<int> &dp)
	 {
	     if(n==0)
	     return 1;
	     
	     if(n<0)
	     return 0;
	     
	     if(dp[n]!= -1)
	     return dp[n];
	     
	     int l = fun(n-1,dp);
	     int r = fun(n-2,dp);
	     
	     int t = pow(10,9)+7;
	     dp[n] = (l+r)%t;
	     return dp[n];
	 }
	
		int nthPoint(int n){
		    // Code here
		   vector<int> dp(n+1,-1); 
		   return fun(n,dp);  
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
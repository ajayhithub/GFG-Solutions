//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int fun(int arr[], int n,vector<int> &dp)
    {
        if(n<0)
        return 0;
        if(dp[n]!=-1)
        return dp[n];
        
        int l = fun(arr,n-1,dp);
        int r = arr[n] + fun(arr,n-2,dp);
        
        dp[n] = max(l,r);
        return max(l,r);
    }
    
     int fun1(int arr[], int n)
    {
        vector<int> dp(n+1,0);
        dp[0] = arr[0];
        for(int i=1;i<n;i++)
        {
        int l = max(arr[i],dp[i-1]);
        
        int r = -1e9;
        if(i-2>=0)
        r = arr[i] + dp[i-2];
        
        dp[i] = max(l,r);
      //  cout<<r<<endl;
        }
        
        return dp[n-1];
    }
    
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
    //   vector<int> dp(n+1,-1);
    //   return fun(arr,n-1,dp);
       
       return fun1(arr,n);
       
        
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends
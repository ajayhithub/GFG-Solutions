//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    
	    unordered_map<int,int> mpp;
	    long long sum = 0;
	    int ans = 0;
	    for(int i=0;i<n;i++)
	    {
	       sum = (sum+arr[i]);
	       int x=((sum%k)+k)%k;
	        if(x == 0)
	        ans = max(ans,i+1);
	   
	       
	       
	       if(mpp.find(x) != mpp.end())
	       {
	           ans = max(ans,i-mpp[x]);    
	       }
	       
	        if(mpp.find(x) == mpp.end())
	       {
	           mpp[x] = i; 
	       }
	       
	    }
	    
	    return ans;
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends
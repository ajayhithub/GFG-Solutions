//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{


	public:
	int findMaxSubarraySum(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    int p = 0;
	    int s = 0;
	    int ans = 0;
	    for(int i=0;i<n;i++)
	    {
	        s += arr[i];
	        while(s>sum && p<i)
	        {
	           s -= arr[p];
	           p++;
	        }
	        
	        if(s<=sum)
	        ans = max(ans,s);
	        
	    }
	    
	    return ans;
	}  

		 

};
	  



//{ Driver Code Starts.

int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	 int n;
        cin>>n;
        
        long long a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        
        long long sum;
        cin >> sum;
        

        Solution ob;
		cout << ob.findMaxSubarraySum(a, n, sum);
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends
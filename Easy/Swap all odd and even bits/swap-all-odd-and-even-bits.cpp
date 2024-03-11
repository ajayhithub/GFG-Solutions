//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
    	// Your code here
    	unsigned int ans = 0;
    	int cnt = 0;
    	while(n>0)
    	{
    	    int a = n&1;
    	    n = n>>1;
    	    int b = n&1;
    	    
    	    ans += a*(1<<(cnt+1))+b*(1<<cnt);
    	    cnt += 2;
    	    n = n>>1;
    	}
    	
    	return ans;
    	
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;//testcases
	while(t--)
	{
		unsigned int n;
		cin>>n;//input n
		
		Solution ob;
		//calling swapBits() method
		cout << ob.swapBits(n) << endl;
	}
	return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int divisibleBy4 (string N)
	{
	    // Your Code Here
	    int n = N.length();
	    int rem = 0;
	    for(int i=0;i<n;i++)
	    {
	        rem = (rem*10 + N[i])%4;
	    }
	    
	    if(rem == 0)
	    return 1;
	    else
	    return 0;
	}
};

//{ Driver Code Starts.

int32_t main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.divisibleBy4 (s) << endl;
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
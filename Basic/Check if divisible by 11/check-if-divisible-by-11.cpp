//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int divisibleBy11 (string S)
	{
	    // Your Code Here
	    int rem = 0;
	    int n = S.length();
	    for(int i=0;i<n;i++)
	    {
	        rem = (rem*10 + S[i]-'0')%11;
	    }
	    
	    if(rem == 0)
	    return 1;
	    else
	    return 0;
	}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.divisibleBy11 (s) << endl;
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
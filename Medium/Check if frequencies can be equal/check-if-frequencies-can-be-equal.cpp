//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here 
	    
	    int n = s.length();
	    map<char,int> mpp;
	    for(int i=0;i<n;i++)
	    {
	        mpp[s[i]]++;
	    }
	    
	    
	     int t = mpp[s[0]];
	    
	    for(auto it:mpp)
	    {
	       if(abs(t-it.second) >= 2)
	       return false;
	    }
	    
	    return true;
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends
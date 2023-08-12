//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	
	 void fun(string S,vector<string> &ans, string str, vector<int> &vis, set<string> &ss)
	 {
	    if(str.length()==S.length())
	    { 
	        if(ss.find(str) == ss.end())
	        ans.push_back(str);
	        
	         ss.insert(str);
	         return;
	    }
	    
	    for(int i=0;i<S.length();i++)
	    {
	       if(!vis[i]) 
	       {
	         vis[i] = 1;
	         str += S[i];
	         fun(S,ans,str,vis,ss);
	         vis[i] = 0;
	         str.pop_back(); 
	       }
	    }
	
	 }
	
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string> ans;
		    string str = "";
		    vector<int> vis(S.length(),0);
		    set<string> ss;
		    fun(S,ans,str,vis,ss);
		    return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    
     void fun(vector<string> &ans, string S, string &t, int vis[])
     {
         if(t.length()==S.length())
         {
             ans.push_back(t);
             return;
         }
         
         int len = S.length();
         for(int i=0;i<len;i++)
         {
             if(vis[i]==0)
             {
                 t.push_back(S[i]);
             
                vis[i] = 1;
                fun(ans,S,t,vis); 
                t.pop_back();
                vis[i] = 0;
             }
         }
     }
    
    vector<string> permutation(string S)
    {
        //Your code her
        vector<string> ans;
        int len = S.length();
        string t = "";
        
        int vis[len] = {0};
        
        fun(ans,S,t,vis);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends
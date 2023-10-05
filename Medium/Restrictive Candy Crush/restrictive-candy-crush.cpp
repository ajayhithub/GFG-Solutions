//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    string Reduced_String(int k,string s){
        // Your code goes here
        
        stack<pair<char,int>> ss;
        int n = s.length();
        int i = 0;

        while(i<n)
        {
            if(!ss.empty() && ss.top().first==s[i])
            {
                int p = ss.top().second+1;
                ss.push({s[i],p});
            }
            else if(ss.empty() || ss.top().first!=s[i])
            {
              ss.push({s[i],1});
            }
           
            if(ss.top().second == k)
            {
                int p = k;
                while(p!=0)
                {
                  ss.pop();
                  p--;
                }
            }
          
           i++;
        }
        
        string ans = "";
        while(!ss.empty())
        {
            ans += ss.top().first;
            ss.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
    }


};

//{ Driver Code Starts.

int main() {
    
    
    int t;cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.Reduced_String(k,s)<<"\n";
        
    }
    
	return 0;
}
// } Driver Code Ends
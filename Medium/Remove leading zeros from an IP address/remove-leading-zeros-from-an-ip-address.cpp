//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
  public:
    string newIPAdd (string s)
    {
        //code here.
        string ans = "";
        int n = s.length();
        
       int i = 0;
       int p = 0;
       int cnt = 0;
       if(s[0]!='.' && s[0]!='0')
        p = 1;
      
       
       while(i<n)
       {
          if(s[i]=='0' && p==0)
          {
            p = 0;
            cnt++;
          }
          else if(s[i]=='.')
          {
            if(cnt!=0)
            ans += '0';
            
            cnt = 0;
            ans += s[i];
            p = 0;
          }
          else
          {
             ans += s[i];
             p = 1;
             cnt = 0;
          }
          
          i++;
       }
       
            if(cnt!=0)
            ans += '0';
        
        return ans;
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
        cout <<ob.newIPAdd (s) << endl;
    }
}


// } Driver Code Ends
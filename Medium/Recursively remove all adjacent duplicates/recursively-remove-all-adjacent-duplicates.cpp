//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:

  string fun(string s)
  {
      
      int n = s.length();
      string ans = "";
      ans += s[0];
      int t = 1;
      for(int i=1;i<n;i++)
      {
          if(s[i-1]!=s[i])
          {
          ans += s[i];
          t=1;
          }
          else
          {
             if(ans.back()==s[i] && t==1)
             {
              ans.pop_back();
              t=0;
             }
          }
      }
      
    //   cout<<ans<<endl;
      if(ans.length()==s.length() || ans.length()==0)
      return ans;
      else
      return fun(ans);
  }

    string rremove(string s){
        // code here
        return fun(s);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}
// } Driver Code Ends
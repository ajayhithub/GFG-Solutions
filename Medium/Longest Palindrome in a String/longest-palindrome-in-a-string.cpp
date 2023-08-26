//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
  bool fun(string s,int l,int r)
  {
    
      while(l<=r)
      {
          if(s[l]!=s[r])
          return false;
          
          l++;
          r--;
      }
     
      return true;
  }
  
  
    string longestPalin (string S) {
        // code here
         string ans = "";
         
         int l = 0;
         int r = S.length()-1;
         int n = S.length();
         int slide = n;
         while(slide--)
         {
            for(int i=0;i<n;i++)
            {
                if(i+slide < n)
                {
                      if(fun(S,i,i+slide)==true)
                     {
                       
                        for(int t=i;t<=i+slide;t++)
                        ans += S[t];
                  
                        return ans;   
                     }
                }
                else
                break;
             
            }   
         }
         
         return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
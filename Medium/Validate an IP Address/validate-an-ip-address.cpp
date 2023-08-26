//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            // code here
            if(s[0]=='.')
            return 0;
            
            int cnt = 0;
            string ss = "";
            int n = s.length();
            for(int i=0;i<n;i++)
            {
               if(s[i]!='.')
               {
                  if(i<n-1 && s[i]=='0' && s[i+1]!='.')
                  return 0;
                  if(s[i]<'0' || s[i]>'9')
                  return 0;
                  
                  ss += s[i];   
               }
               else if(s[i]=='.')
               {
                   cnt++;
                  if(ss=="")
                  return 0;
            
                  int num = stoi(ss);
                  if(ss.length()!=1 && num==0)
                  return 0;
                  if(num<0 || num>255)
                  return 0;
                  
                  
                  
                  ss = "";
               }
            
            }
            
            if(s[n-1]=='.' || cnt!=3)
            return 0;
            else 
            return 1;
            
            
        }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } Driver Code Ends
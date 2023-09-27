//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        // Your code goes here  
          int ans  = 1e8;
          int n = str.length();
          int i = 0,j = 0;
       
          vector<int> mpp(70);
          
          
          set<char> ss;
          for(int i=0;i<n;i++)
          {
              ss.insert(str[i]);
          }
          
          int cnt = ss.size();
          
          int tt = 0;
          while(j<n)
          {
              
            if(mpp[str[j]-'A'] == 0)
            {
                tt++;
                while(tt==cnt && i<=j)
                {
                    ans = min(ans,j-i+1);
                    mpp[str[i]-'A']--;
                    if(mpp[str[i]-'A'] == 0)
                    {
                       tt--;
                    }
                   i++;
                }
            }
            
             mpp[str[j]-'A']++; 
             j++;
          }
          
             while(tt==cnt && i<=j)
             {
                  mpp[str[i]-'A']--;
                  ans = min(ans,j-i+1);
                  if(mpp[str[i]-'A'] == 0)
                  {
                  tt--;
                  }
                  
                i++;
             }
          
          return ans;
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends
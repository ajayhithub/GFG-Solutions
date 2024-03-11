//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            //code here.
            vector <int> ans;
            int num = n;
            d = d%16;
            int cnt = 0;
            int tt = 0;
            while(n>0)
            {
                if(to_string(n&1) == "1")
                {
                  int t = 1<<(cnt+d)%16;
                  tt += t;
                }
                n = n>>1;
                cnt++;
            }
            ans.push_back(tt);
            tt = 0;
            cnt = 0;
             while(num>0)
            {
                if(to_string(num&1) == "1")
                {
                  int t = 1<<(cnt-d+16)%16;
                  tt += t;
                }
                num = num>>1;
                cnt++;
            }
            ans.push_back(tt);
            
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
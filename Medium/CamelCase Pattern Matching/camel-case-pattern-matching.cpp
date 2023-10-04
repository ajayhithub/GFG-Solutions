//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
        // code here
        vector<string> ans;
        int len = Pattern.length();
        for(int i=0;i<N;i++)
        {
            int n = Dictionary[i].length();
            int p = 0;
            for(int j=0;j<n;j++)
            {
                if(Dictionary[i][j]>='A' && Dictionary[i][j]<='Z')
                {
                     if(Dictionary[i][j] == Pattern[p]) 
                    {
                          p++;
                    
                       if(p==len)
                       {
                        ans.push_back(Dictionary[i]);
                         break;
                       }
                    }
                    else
                    {
                       break;
                    }
                
                
                }
                
            }
        }
        
        if(ans.size() == 0)
        {
            ans.push_back("-1");
            return ans;
        }
       return ans; 
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
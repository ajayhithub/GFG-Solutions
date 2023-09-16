//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    // your code here
    int n = S.length();
    int i = 0;
    int j = 0;
    int cnt = 0;
    unordered_map<char,int> mpp;
    int ans = 0;
    
    while(i<=j && j<n)
    {
       if(mpp[S[j]] == 0)
       {
           cnt++;
           mpp[S[j]] = 1;
           ans = max(ans,cnt);
           
       }
       else
       {
           while(i<j)
           {
               if(S[i] == S[j])
               {
                   i++;
                   break;
               }
              mpp[S[i]] = 0;
              i++;
              cnt--;
           }
           
       }
       
       j++;
    }
     ans = max(ans,cnt);
    
    return ans;
    
}
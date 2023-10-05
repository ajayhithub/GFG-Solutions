//{ Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int transform (string A, string B)
    {
        //code here.
        if(A.length() != B.length())
        return -1;
        
        unordered_map<char,int> mpp;
        
         int na = A.length();
         int nb = B.length();
        for(int i=0;i<na;i++)
        {
            mpp[A[i]]++;
        }
        
         for(int i=0;i<nb;i++)
        {
            mpp[B[i]]--;
        }
       
        for(auto it:mpp)
        {
            if(it.second != 0)
            {
            return -1;
            }
        }
        
        int ans = 0;
        
         int i = A.length()-1;
         int j = B.length()-1;
        while(i>=0 && j>=0)
        {
          if(A[i]!=B[j])
          {
              i--;
              ans++;
          }
          else
          {
              i--;
              j--;
          }
        }
        
        
        return ans;
    }
};


//{ Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}
// } Driver Code Ends
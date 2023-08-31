//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
        int getCount (string S, int N)
        {
            //code here.
           unordered_map<char,int> mpp;
           int ans = 0;
           int n = S.length();
           
           
           for(int i=0;i<n;i++)
           {
               if(i==0)
               mpp[S[i]]++;
              else if(S[i-1]!=S[i])
                mpp[S[i]]++;
           }
             
           
          if(mpp[S[0]]==N)
          {
            ans = 1;
            mpp[S[0]] = -1;
          }
            
           
           for(int i=1;i<n;i++)
           {
               
               if(S[i-1]!=S[i])
               {
                   if(mpp[S[i]]==N)
                   {
                      ans++; 
                      mpp[S[i]] = -1;
                     // cout<<S[i]<<" ";
                   }
                   
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
        string s; cin >> s;
        int n; cin >> n;
        
        Solution ob;
        cout <<ob.getCount (s, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
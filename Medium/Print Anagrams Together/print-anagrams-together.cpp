//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string>> Anagrams(vector<string>& string_list) {
        //code here
        int n = string_list.size();
        unordered_map<string,vector<int>> mpp;
        vector<vector<string>> ans;
        
        
        for(int i=0;i<n;i++)
        {
           string aa = string_list[i];
           sort(aa.begin(),aa.end());
           mpp[aa].push_back(i);
        }
         
         for(auto &it:mpp)
         {
             vector<string> ss;
             for(auto &i:it.second)
             {
                ss.push_back(string_list[i]); 
             }
             ans.push_back(ss);
            
         }
         
         
         return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}

// } Driver Code Ends
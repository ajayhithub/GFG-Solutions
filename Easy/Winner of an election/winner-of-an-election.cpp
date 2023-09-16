//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        vector<string> ans;
        
        map<string,int> mpp;
         int aa = 0;
        for(int i=0;i<n;i++)
        {
            mpp[arr[i]]++;
            aa = max(aa,mpp[arr[i]]);
        }
        
        vector<string> ss;
        for(auto it:mpp)
        {
           if(it.second == aa)
           ss.push_back(it.first);
    
        }
        
        sort(ss.begin(),ss.end());
        
        ans.push_back(ss[0]);
        
        string num = to_string(aa);
        ans.push_back(num);
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends
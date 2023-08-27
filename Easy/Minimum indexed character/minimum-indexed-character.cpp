//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        // Your code here
        int n = str.length();
         int nn = patt.length();
         int ans  = 1e8;
         unordered_map<char,int> mpp;
         
            for(int i=0;i<n;i++)
           {
              if(mpp[str[i]]==0)
              mpp[str[i]] = i;
              
           }    
        
        for(int i=0;i<nn;i++)
        {
            if(patt[i]==str[0])
            return 0;
            else if(mpp[patt[i]]!=0)
             ans = min(ans,mpp[patt[i]]);
            
           // cout<<mpp[patt[i]]<<" ";
        }
        
        if(ans==1e8)
        return -1;
        else
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
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}

// } Driver Code Ends
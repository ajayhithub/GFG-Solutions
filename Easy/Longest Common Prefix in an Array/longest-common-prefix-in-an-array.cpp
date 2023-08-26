//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string ans = arr[0];
        for(int i=1;i<N;i++)
        {
            int n = arr[i].length();
            string s = "";
            int size = ans.length();
            for(int j=0;j<n;j++)
            {
                if(j<size)
                {
                    if(ans[j]==arr[i][j])
                    {
                       s += ans[j]; 
                    }
                    else
                    break;
                }
                else
                break;
            }
            ans = s;
            
        }
        
        if(ans.length()==0)
        return "-1";
        else
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
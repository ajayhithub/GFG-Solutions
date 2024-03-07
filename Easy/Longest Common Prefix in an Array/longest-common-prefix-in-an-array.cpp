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
        string s = "";
        int l = 1e9;
        for(int i=0;i<N;i++)
        {
            int n = arr[i].length();
            l = min(l,n);
        }
        
        int r = 0;
        while(r<l)
        {
            int t = 0;
            for(int i=0;i<N;i++)
            {
               if(arr[0][r] != arr[i][r])
                {
                   t = 1;
                   break;
                }
            }
            if(t==0)
            {
               s += arr[0][r];
            }
            else
            break;
            
            r++;
        }
        
        if(s=="")
        return "-1";
        else
        return s;
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
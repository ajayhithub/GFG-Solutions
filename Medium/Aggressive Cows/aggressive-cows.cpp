//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

     bool fun(vector<int> &stalls, int dis,int k, int n)
     {
         int cnt = 1;
         int pre = stalls[0];
         for(int i=1;i<n;i++)
         {
             if(abs(stalls[i]-pre) >= dis)
             {
                cnt++;
                pre = stalls[i];
             }
         }
         
           if(cnt >= k)
             return true;
           else
             return false;
     }

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        int maxi = INT_MIN;
        sort(stalls.begin(),stalls.end());
        
        maxi = stalls[n-1]-stalls[0];
        
         int ans = 0;
         int i = 1;
         int j = maxi;
        while(i<=j)
        {
            int mid = (i+j)/2;
            if(fun(stalls,mid,k,n) == true)
            {
                ans = mid;
                i = mid+1;   
            }
            else
              j = mid-1;
        }
    
      
       return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends
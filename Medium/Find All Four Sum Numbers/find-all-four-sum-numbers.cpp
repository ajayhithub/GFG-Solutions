//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int>> fourSum(vector<int> &arr, int k) {
     // Your code goes here
           
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        set<vector<int>> s;
        int n = arr.size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int a = j+1;
                int b = n-1;
                while(a<b)
                {
                                     
                   if(arr[i]+arr[j]+arr[a]+arr[b]==k)
                   {
                       
                       if(s.find({arr[i],arr[j],arr[a],arr[b]})==s.end())
                       ans.push_back({arr[i],arr[j],arr[a],arr[b]});
                       
                       s.insert({arr[i],arr[j],arr[a],arr[b]});
                       int aa=arr[a];
                       int bb=arr[b];
                       while(arr[a]==aa)
                       a++;
                       while(arr[b]==bb)
                       b--;
                   }
                   else if(arr[i]+arr[j]+arr[a]+arr[b]>k)
                   {
                       b--;
                   }
                   else if(arr[i]+arr[j]+arr[a]+arr[b]<k)
                   {
                       a++;
                   }
                }
            }
        }
        
        return ans;
            
          
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
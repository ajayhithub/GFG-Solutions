//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


int findElement(int arr[], int n) {
    
        vector<int> pre(n),suf(n);
        int p = 0;
        for(int i=0;i<n;i++)
        {
            p = max(p,arr[i]);
            pre[i] = p;
            
          //  cout<<p<<" ";
        }
     //   cout<<endl;
        int pp = 1e9;
        for(int i=n-1;i>=0;i--)
        {
            pp = min(pp,arr[i]);
            suf[i] = pp;
            
           // cout<<pp<<" ";
        }
      //  cout<<endl;
        
        for(int i=1;i<n-1;i++)
        {
            if(pre[i-1]<=arr[i] && arr[i]<=suf[i+1])
            {
              return arr[i];
            }
        }
        
        return -1;
        
}
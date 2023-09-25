//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
        int tt = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=arr[i+1] && i<n-1)
            tt++;
        }
        if(tt==n-1)
        return n-1;
        else if(tt==0)
        return 0; 
        
        int ans = 0;
        int i=0;
        int j = n-1;
        
        for(int i=0;i<n;i++)
        { 
            if((n-1-i) < ans)
            break;
            
           while(j>=0)
           {
              if((j-i) < ans)
            {
                break;
            }
           else if(arr[i]<=arr[j])
            {
                ans = max(ans,j-i);
                break;
            }
        
            j--;
           }
           
           j = n-1;
        }
        
        
        return ans;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
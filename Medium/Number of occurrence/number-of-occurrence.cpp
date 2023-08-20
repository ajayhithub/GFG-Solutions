//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    if(arr[n-1]<x)
	    return 0;
	    else if(arr[0]>x)
	    return 0;
	    
	    int l  =0;
	    int r = n-1;
	    int mid  = (l+r)/2;
	    while(l<=r)
	    {
	         mid  = (l+r)/2;
	        if(arr[mid]==x && arr[mid-1]<x)
	        {
	          break;  
	        }
	        else if(arr[mid]<x)
	        {
	            l = mid + 1;
	        }
	        else if(arr[mid]==x || arr[mid]>x)
	        r = mid-1;
	        
	    }
	    
	    
	    int ans =  0;
	    for(int i = mid; i<n;i++)
	    {
	        if(arr[i] != x)
	        break;
	        
	        ans++;
	    }
	    
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
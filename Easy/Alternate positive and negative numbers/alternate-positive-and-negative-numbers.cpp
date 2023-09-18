//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    
	    queue<int> neg;
	    queue<int> pos;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i] < 0)
	        neg.push(arr[i]);
	        else
	        pos.push(arr[i]);
	    }
	    
	    if(neg.size()<=pos.size())
	    {
	      
	        for(int i=0;i<n;i++)
	        {
	            if(neg.empty())
	            {
	              arr[i] = pos.front();
	              pos.pop();
	            }
	            
	            if(i%2 != 0 && !neg.empty())
	            {
	            arr[i] = neg.front();
	            neg.pop();
	            }
	            else if(i%2 == 0 && !neg.empty())
	            {
	            arr[i] = pos.front();
	            pos.pop();
	            }
	        }
	       
	    }
	    else
	    {
	         for(int i=0;i<n;i++)
	        {
	            if(pos.empty())
	            {
	              arr[i] = neg.front();
	              neg.pop();
	            }
	            
	            if(i%2 == 0 && !pos.empty())
	            {
	            arr[i] = pos.front();
	            pos.pop();
	            }
	            else if(i%2 != 0 && !pos.empty())
	            {
	            arr[i] = neg.front();
	            neg.pop();
	            }
	        }
	    }
	    
	    return ;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
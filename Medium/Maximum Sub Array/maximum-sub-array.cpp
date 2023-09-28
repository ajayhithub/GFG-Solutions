//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    // code here
	    vector<int> ans;
	     int sum = 0;
	     int mx = 0;
	     int p = n;
	     int t = 0;
	    
	     int lenm = 0;
	     int len = 0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]<0)
	        {
	            if(sum == mx && len > lenm && t==0)
	            {
	                p = i;
	                mx = sum;
	                lenm = len;
	                t = 1;
	            }
	          else if(sum > mx && t==0)     
	           {
	             p = i;
	             mx = sum;
	             t = 1;
	             
	             lenm  = max(lenm,len);
	           }
	         //  cout<<sum<<endl;
	           sum = 0;
	           len = 0;
	        }
	        else
	        {
	            sum += a[i];
	            t = 0;
	            len++;
	        }
	    }
	    
	   // cout<<len<<"A"<<lenm<<endl;
	    if(sum > mx )     
	    {
	       p = n;
	    }
	    else if(sum == mx && len > lenm)
	    {
	        p = n;
	    }
	           
	    for(int i=p-1;i>=0;i--)
	    {
	        if(a[i]>=0)
	        ans.push_back(a[i]);
	        else
	        break;
	    }
	    
	    reverse(ans.begin(),ans.end());
	    
	    if(ans.size()==0)
	    {
	        ans.push_back(-1);
	        return ans;
	    }
	    else
	    return ans;
	  
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

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
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends
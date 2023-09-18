//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int maxSubstring(string S)
	{
	    // Your code goes here
	    int n = S.length();
	    int ans = 0;
	    int cnt0 = 0;
	    int cnt1 = 0;
	    priority_queue<int, vector<int>, greater<int>> pq;
	    
	    pq.push(0);
	    for(int i=0;i<n;i++)
	    {
	        if(S[i] == '0')
	        cnt0++;
	        else
	        cnt1++;
	        
	        
	        int num = cnt0-cnt1;
	        pq.push(num);
	        
	        ans = max(ans,num-pq.top());
	        
	    }
	    
	    if(ans == 0)
	    return -1;
	    else
	    return ans;
	    
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.maxSubstring(s) << "\n";
   	}

    return 0;
}

// } Driver Code Ends
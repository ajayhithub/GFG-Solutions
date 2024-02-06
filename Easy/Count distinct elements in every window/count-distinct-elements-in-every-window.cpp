//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        unordered_map<int,int> mpp;
        int l = 0;
        int r = 0;
        vector<int> ans;
        while(r<k)
        {
           mpp[A[r]]++;
           r++;
        }
        
         while(r<n)
        {
           ans.push_back(mpp.size());
           mpp[A[r]]++;
           mpp[A[l]]--;
           if(mpp[A[l]]==0)
           mpp.erase(A[l]);
           
           
           r++;
           l++;
        }
        ans.push_back(mpp.size());
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
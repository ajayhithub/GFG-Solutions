//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to count the number of possible triangles.
    int findNumberOfTriangles(int arr[], int n)
    {
        // code here
        sort(arr,arr+n);
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            int j = i+1;
            int k = n-1;
            while(j<=k)
            {
                if(arr[i]+arr[j] <= arr[k])
                {
                    k--;
                }
                else
                {
                    ans += k-j;
                    j++;
                    k = n-1;
                }
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.findNumberOfTriangles(arr,n) <<endl;
    }
    return 0;
}
// } Driver Code Ends
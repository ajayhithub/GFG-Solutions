//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            // your code here 
            sort(arr,arr+n);
            
            int cnt = 0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]<0)
                cnt++;
            }
            if(cnt == n)
            return arr[n-1]+arr[n-2]; 
            else if(cnt == 0)
            return arr[0]+arr[1];
             
             int ans = 1e8;
             int i = 0;
             int j = n-1;
             while(i<j)
             {
                int num = arr[i]+arr[j];
                 if(abs(num)<abs(ans))
                 {
                   ans = num;
                 }
                 else if(abs(num)==abs(ans))
                 {
                    ans = max(ans,num); 
                 }
                 
                 if(num < 0)
                 i++;
                 else 
                 j--;
                 
             }
            
            
            return ans;
        }
};

//{ Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}
// } Driver Code Ends
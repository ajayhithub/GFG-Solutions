//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        
        long long ans = 0;
        int pre[n] = {0};
        int suf[n] = {0};
        int ma = 0;
        for(int i=0;i<n;i++)
        {
            ma = max(ma,arr[i]);
            pre[i] = ma;
        }
        
        int m = 0;
         for(int i=n-1;i>=0;i--)
        {
            m = max(m,arr[i]);
            suf[i] = m;
        }
        
        for(int i=0;i<n;i++)
        {
            ans += min(pre[i],suf[i])-arr[i];
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends
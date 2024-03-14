//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        
      vector<long long> l(n,0);
      vector<long long> r(n,0);
      int ll = 0;
      for(long long i=0;i<n;i++)
      {
          ll = max(ll,arr[i]);
          l[i] = ll;
      }
      
      int rr = 0;
       for(long long i=n-1;i>=0;i--)
      {
          rr = max(rr,arr[i]);
          r[i] = rr;
      }
      
      long long ans = 0;
      
      for(long long i=0;i<n;i++)
      {
         if(min(l[i],r[i])-arr[i] > 0)
         ans += min(l[i],r[i])-arr[i];  
         
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
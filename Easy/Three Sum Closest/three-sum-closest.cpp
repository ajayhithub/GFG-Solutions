//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution{
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        sort(arr.begin(),arr.end());
        int ans = 0;
        int n = arr.size();
        
        for(int i=0;i<n;i++)
        {
            int j = i+1;
            int k = n-1;
            while(j<k && j<n)
            {
                int sum = arr[i]+arr[j]+arr[k];
                if(sum<=target)
                {
                    ans = max(ans,sum);
                    j++;
                }
                else
                {
                  k--;    
                }
            }
            
        }
        
        int ansr = INT_MAX;
          for(int i=n-1;i>=0;i--)
        {
            int j = 0;
            int k = i-1;
            while(j<k && k>0)
            {
                int sum = arr[i]+arr[j]+arr[k];
                if(sum>=target)
                {
                    ansr = min(ansr,sum);
                    k--;
                }
                else
                {
                  j++;    
                }
            }
            
        }
        
      //  cout<<ans<<" "<<ansr<<" ";
        
      if(ansr==INT_MAX)
      {
        return ans;
      }
      else
      {
         if(abs(ans-target) < abs(ansr-target))
         return ans;
         else
         return ansr;
      }
        
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while(t--) {
        
        int n,target;
        cin >> n >> target;
        
        vector<int> vec(n);
        
        for(int i = 0 ; i < n ; ++ i ) 
            cin >> vec[i];
        Solution obj;
        cout << obj.threeSumClosest(vec, target) << "\n";
    }
}

//Position this line where user code will be pasted.

// } Driver Code Ends
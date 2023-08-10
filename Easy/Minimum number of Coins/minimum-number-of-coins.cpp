//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

     vector<int> fun(int N,vector<int> ans,int arr[],int i)
      {
          if(N==0 || i<0)
          return ans;
        
              if(arr[i]<=N)
              {
                  ans.push_back(arr[i]);
                  return fun(N-arr[i],ans,arr,i);
                  
              }else{
                  return fun(N,ans,arr,i-1);
              }
          
      }

    vector<int> minPartition(int N)
    {
        // code here
        int arr[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
        vector<int> ans;
       vector<int> rr = fun(N,ans,arr,9);
        return rr;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
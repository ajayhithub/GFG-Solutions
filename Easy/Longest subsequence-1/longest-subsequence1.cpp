//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

  int fun(int N, int A[], int i,int pic)
  {
     if(i>=N) return 1;
     
     int l = INT_MIN, r = INT_MIN;
       
        // cout<<A[i]<<"A"<<cnt<<" ";
      if(abs(A[pic]-A[i]) == 1)
      {
         // cout<<A[i]<<"A"<<cnt<<" ";
          l = fun(N,A,i+1,i)+1;
      }
      if(i==pic)
      {
          r=max(fun(N,A,i+1,pic+1),fun(N,A,i+1,pic));
      }
      else{
          r=fun(N,A,i+1,pic);
      }
     
     
     return max(l,r);
  }

    int longestSubsequence(int N, int A[])
    {
        // code here
       return fun(N,A,0,0);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int A[N];
        for(int i = 0;i < N;i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.longestSubsequence(N, A)<<endl;
    }
    return 0;
}
// } Driver Code Ends
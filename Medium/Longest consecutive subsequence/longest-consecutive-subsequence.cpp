//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
       if(N==1)
       return 1;
       
      
       sort(arr,arr+N);
       
       int ans = 1;
       int mn = 1;
       for(int i=0;i<N-1;i++)
       {
           if(arr[i]+1==arr[i+1])
           {
               ans++;
               mn = max(mn,ans);
           }
           else if(arr[i]==arr[i+1])
           {
               continue;
           }
           else
           ans = 1;
       }
       
        //   if(arr[N-2]+1==arr[N-1])
        //   {
        //       ans++;
        //       mn = max(mn,ans);
        //   }
           
           return mn;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends
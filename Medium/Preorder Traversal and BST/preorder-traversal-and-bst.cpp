//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++


class Solution {
  public:
    // bool solve(int arr[],int l,int h,int mini,int maxi,map<int,int>&mp,int N)
    // {
    //     if(l==h){
    //         // cout<<arr[l]<<" "<<mini<<" "<<maxi<<endl;
    //         if(arr[l]>mini && arr[h]<maxi)return true;
    //         return false;
    //     }
    //     if(l>h)return true;
    //     if(arr[l]>mini && arr[l]<maxi){
    //     auto it=mp.find(arr[l]);
    //     if(it!=mp.begin()){
    //     it--;
    //     // int i=l;
    //     // while(i<=h && arr[i]<=arr[l])
    //     // i++;
    //     int ind=(*it).second;
    //     bool ans=true;
    //     ans=(ans&solve(arr,l+1,ind,mini,arr[l],mp,N));
    //     ans=(ans&solve(arr,ind+1,h,arr[l],maxi,mp,N));
    //     return ans;
    //     }
    //     else return true;
    //     }
    //     else
    //     return false;
    // }
    
     int i=0;
    void solve( int n, int arr[], int min, int max){
        if(i>=n) 
            return;
        
        if(min<=arr[i]&&max>=arr[i]){
            
            int rootData=arr[i];
            i++;
            
            solve(n, arr, min, rootData);
            solve( n, arr, rootData, max);
            
        }
        
    }
    
    int canRepresentBST(int arr[], int N) {
        // code here
        int min=INT_MIN;
        int max=INT_MAX;
    
        solve(N,arr,min, max);
        return i==N;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        Solution ob;
        cout << ob.canRepresentBST(arr, N) << endl;
    }
    return 0;
}
// } Driver Code Ends
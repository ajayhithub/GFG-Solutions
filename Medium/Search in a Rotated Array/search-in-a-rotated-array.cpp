//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int search(int A[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        int n = h;
        int mid = (l+h)/2;
        while(l<=h)
        {
             
             mid = (l+h)/2;
             if(A[0]<=A[mid])
             {
               l = mid+1;
             }
             else
             {
               h = mid-1;
             }
        }
        
         if(A[0]<=key)
         {
            //  cout<<h<<" ";
             int l1=0,r1=h;
             int mid1 = 0;
             while(l1<=r1)
             {
                 mid1 = (l1+r1)/2;
                if(A[mid1]==key)
                return mid1;
                else if(A[mid1]<key)
                {
                  l1 = mid1+1;  
                 // cout<<l1<<"a";
                }
                else if(A[mid1]>key)
                {
                  r1 = mid1-1;  
                //  cout<<r1<<"b";
                } 
             }
            
         }
         else
         {
             // cout<<"b";
            int l1=h+1,r1=n;
            int mid1 = 0;
             while(l1<=r1)
             {
                mid1 = (l1+r1)/2;
                if(A[mid1]==key)
                return mid1;
                else if(A[mid1]<key)
                {
                   l1 = mid1+1; 
                }
                else if(A[mid1]>key)
                {
                   r1 = mid1-1;  
                }
             }
         }
        
        return -1;
        
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends
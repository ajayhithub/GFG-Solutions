//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
       // Your code here
         int tt = 0;
        for(int i=0;i<N;i++)
        {
            if(A[i]<=A[i+1] && i<N-1)
            tt++;
        }
        if(tt==N-1)
        return N-1;
        else if(tt==0)
        return 0; 
        
        int ans = 0;
        int i=0;
        int j = N-1;
        
        for(int i=0;i<N;i++)
        { 
            if((N-1-i) < ans)
            break;
            
           while(j>=0)
           {
              if((j-i) < ans)
            {
                break;
            }
           else if(A[i]<=A[j])
            {
                ans = max(ans,j-i);
                break;
            }
        
            j--;
           }
           
           j = N-1;
        }
        
        
        return ans;
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std; 

// } Driver Code Ends

class Solution{
    public:
    bool isSubSequence(string A, string B) 
    {
        // code here
        int n = B.length();
        int nn = A.length();
          int t = 0;
          
        for(int i=0;i<n;i++)
        {
           if(A[t]==B[i])
           {
             t++;    
           }
           
           
           if(t>=nn)
           return true;
           
           
        }
        
//cout<<" "<<t<<" "<<nn<<" "<<n<<" ";
        if(t==nn)
        return true;
        else
        return false;
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;  
        Solution ob;
        if(ob.isSubSequence(A,B))
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0; 
} 

// } Driver Code Ends
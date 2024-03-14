//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int rr, int cc) 
    {
        // code here 
        vector<int> ans;
        
        int l=0,r=cc-1;
        int u=0,b=rr-1;
        while(l<=r || u<=b)
        {
        for(int i=l;i<=r;i++)
        {
          ans.push_back(matrix[u][i]);
        }
        u++;
        if(l>r || u>b)
        break;
        
        for(int i=u;i<=b;i++)
        {
          ans.push_back(matrix[i][r]);  
        }
        r--;
        if(l>r || u>b)
        break;
        
        for(int i=r;i>=l;i--)
        {
          ans.push_back(matrix[b][i]);  
        }
        b--;
        if(l>r || u>b)
        break;
        
        for(int i=b;i>=u;i--)
        {
          ans.push_back(matrix[i][l]);  
        }
        l++;
        }
        
        
        return ans;
               
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
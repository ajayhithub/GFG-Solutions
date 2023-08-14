//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

class Solution {
public:

     bool fun(vector<vector<char>>& mm, string w, int row,int col, int p,vector<vector<int>> &vis)
     {
         if(p==w.length())
         return true;
         
         // cout<<p<<" "<<w.length()<<" ";
          vis[row][col] = 1;
          int dr[] = {-1,0,1,0};
          int dc[] = {0,1,0,-1};
          int n = mm.size();
          int m = mm[0].size();
          for(int i=0;i<4;i++)
          {
              int nr = row+dr[i];
              int nc = col+dc[i];
              if(nr>=0&&nr<n && nc>=0&&nc<m && !vis[nr][nc] && mm[nr][nc]==w[p])
              {
                  if(fun(mm,w,nr,nc,p+1,vis)==true)
                  return true;
              }
              
          }
          
          return false;
     }

    bool wordSearch(vector<vector<char>>& mm, string w) {
        //code here
          int n = mm.size();
          int m = mm[0].size();
          for(int i=0;i<n;i++)
          {
              for(int j=0;j<m;j++)
              {
                  if(mm[i][j]==w[0])
                  {
                      vector<vector<int>> vis(n,vector<int>(m,0));
                      if(w.length()==1)
                      return true;
                      if(fun(mm,w,i,j,1,vis)==true)
                      return true;
                  }
              }
          }
          
          return false;
    }

};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<char>> mat(n,vector<char>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>mat[i][j];
            }
        }
        string str; cin>>str;
        Solution ob;
        auto ans=ob.wordSearch(mat,str);
        cout<<ans<<"\n";
    }
    return 0;
}

// } Driver Code Ends
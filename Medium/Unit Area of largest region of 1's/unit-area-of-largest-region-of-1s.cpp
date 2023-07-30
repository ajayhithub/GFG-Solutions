//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    
    void bfs(int r,int c, vector<vector<int>>& grid, vector<vector<int>> &vis,int cnt, int &ans)
    {
        
          int n = grid.size();
          int m = grid[0].size();
          queue<pair<int,int>> q;
           q.push({r,c});
           vis[r][c] = 1;
           while(!q.empty())
           {
               int rr = q.front().first;
               int cc = q.front().second;
               q.pop();
               
               for(int i=-1;i<=1;i++)
               {
                   for(int j=-1;j<=1;j++)
                   {
                       int nr = rr+i;
                       int nc = cc+j;
                       if(nr>=0&&nr<n && nc>=0&&nc<m && !vis[nr][nc] && grid[nr][nc]==1)
                       {
                           cnt++;
                           vis[nr][nc] = 1;
                           q.push({nr,nc});
                       }
                   }
               }
               
           }
       
      ans = max(ans,cnt);       
    }
    
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            
            for(int j=0;j<m;j++)
            {
                
                if(!vis[i][j] && grid[i][j]==1)
                {
                  int cnt = 1;
                  bfs(i,j,grid,vis,cnt,ans);
                }
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
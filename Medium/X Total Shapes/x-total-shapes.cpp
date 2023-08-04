//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find the number of 'X' total shapes.
    
    void fun(int r, int c, vector<vector<int>>& vis, vector<vector<char>>& grid)
    {
        vis[r][c] = 1;
        queue<pair<int,int>> s;
        s.push({r,c});
         int n = grid.size();
        int m = grid[0].size();
        while(!s.empty())
        {
            int rr = s.front().first;
            int cc = s.front().second;
            s.pop();
            int dr[] = {-1,0,1,0};
            int dc[] = {0,1,0,-1};
            for(int i=0;i<4;i++)
            {
                int nr = rr+dr[i];
                int nc = cc+dc[i];
                if(nr>=0&&nr<n && nc>=0&&nc<m && grid[nr][nc]=='X'&& !vis[nr][nc])
                {
                    vis[nr][nc] = 1;
                    s.push({nr,nc});
                }
            }
        }
    }
    
    int xShape(vector<vector<char>>& grid) 
    {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> vis(n,vector<int>(m,0));
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='X' && !vis[i][j])
                {
                    ans++;
                    fun(i,j,vis,grid);
                }
            }
        }
        if(ans==0)
        return -1;
        else
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
		vector<vector<char>>grid(n, vector<char>(m, '#'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.xShape(grid);
		cout << ans <<'\n';
	}
	return 0;
}
// } Driver Code Ends
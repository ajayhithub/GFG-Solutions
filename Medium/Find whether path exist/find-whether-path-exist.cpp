//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        bool ans = false;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        
         pair<int,int> pr;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    pr.first = i;
                    pr.second = j;
                    break;
                }
            }
        }
        
        queue<pair<int,int>> q;
        q.push({pr.first,pr.second});
        
        int dr[] = {-1,0,1,0};
        int dc[] = {0,1,0,-1};
        while(!q.empty())
        {
           int row = q.front().first;
           int col = q.front().second;
           q.pop();
           
           for(int i=0;i<4;i++)
           {
              int nr = row+dr[i];
              int nc = col+dc[i];
              if(nr>=0&&nr<n && nc>=0&&nc<m && !vis[nr][nc] && grid[nr][nc]==3)
              {
                  vis[nr][nc] = 1;
                  q.push({nr,nc});
              }
              else if(nr>=0&&nr<n && nc>=0&&nc<m && !vis[nr][nc] && grid[nr][nc]==2)
              {
                  return true;
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
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}
// } Driver Code Ends
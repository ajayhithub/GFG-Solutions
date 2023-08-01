//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:

      bool dfs(int row, int col,int i,vector<vector<char>>& board, string word,vector<vector<int>> vis)
    {
         queue<pair<int,int>>q;
         q.push({row,col});
         
         vis[row][col] = 1;
         int n = board.size();
         int m = board[0].size();
         int dr[] = {-1,0,1,0};
         int dc[] = {0,1,0,-1};
        
        while(!q.empty())
        {
             
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            // cout<<board[r][c]<<"{"<<r<<c<<"}";
             for(int t=0;t<4;t++)
            {
              int nr = r+dr[t];
              int nc = c+dc[t];
              
             // if(nr>=0 && nr<n && nc>=0&&nc<m && !vis[nr][nc])
             // cout<<"A";
              if(nr>=0 && nr<n && nc>=0&&nc<m && !vis[nr][nc] && board[nr][nc]==word[i])
              {
                 vis[nr][nc] = 1;
                 q.push({nr,nc});
                 i++;
                 break;
              }
            
            } 
        }
        if(word.length()==i)
        {
          return true;     
        }
        else    
         return false;
    }
    
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
         map<char,vector<pair<int,int>>>mpp;
         int r = board.size();
         int c = board[0].size();
      for(int i=0;i<r;i++)
      {    
          for(int j=0;j<c;j++)
          {
              if(board[i][j]==word[0])
              mpp[board[i][j]].push_back({i,j});
          }
      }
      
      
             for(auto it:mpp[word[0]])
             {
                vector<vector<int>> vis(r,vector<int>(c,0));
                // cout<<it.first<<it.second<<" ";
                if(dfs(it.first,it.second,1,board,word,vis)==true)
                return true;
             }   
            
       return false;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends
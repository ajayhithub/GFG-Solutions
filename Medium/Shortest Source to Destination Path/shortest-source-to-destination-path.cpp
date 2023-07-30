//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code here
         if(A[0][0]==0 || A[X][Y]==0)
         return -1;
         if(X==0 && Y==0 && A[X][Y]==1)
         return 0;
         
        vector<vector<int>> vis(N,vector<int>(M,0));
        queue<pair<int,pair<int,int>>> q;
        q.push({1,{0,0}});
        
        int ans = INT_MAX;
        while(!q.empty())
        {
            int t = q.front().first;
            int row = q.front().second.first;
            int col = q.front().second.second;
            q.pop();
            
            int dr[] = {-1,0,1,0};
            int dc[] = {0,1,0,-1};
            
            for(int i=0;i<4;i++)
            {
                int nr = row+dr[i];
                int nc = col+dc[i];
                
                if(nr>=0&&nr<N && nc>=0&&nc<M && !vis[nr][nc] && A[nr][nc]==1)
                {
                    vis[nr][nc] = 1;
                    q.push({t+1,{nr,nc}});
                }
                 if(nr>=0&&nr<N && nc>=0&&nc<M && nr==X && nc==Y)
                {
                    ans = min(ans,t);
                }
            }
        }
        if(ans==INT_MAX)
        return -1;
        else
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends
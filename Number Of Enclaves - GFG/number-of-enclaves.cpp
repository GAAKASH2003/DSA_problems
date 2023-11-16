//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    
    void dfs(vector<vector<int>> &grid,vector<vector<int>> &visit,int m,int n,int x,int y){
        int dx[4]={1,0,-1,0};
        int dy[4]={0,1,0,-1};
        if(x>=m or x<0 or y<0 or y>=n or grid[x][y]==0){
            return;
        }
        visit[x][y]=1;

        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx<m and nx>=0 and ny>=0 and ny<n and visit[nx][ny]==0){
                dfs(grid,visit,m,n,nx,ny);
            }
        }
        return;
    }
    int numberOfEnclaves(vector<vector<int>> &grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>visit(m,vector<int>(n,0));
        
            for(int j=0;j<n;j++){
                if(visit[0][j]==0){
                dfs(grid,visit,m,n,0,j);
                }
            }
            for(int j=0;j<n;j++){
                if(visit[m-1][j]==0){
                dfs(grid,visit,m,n,m-1,j);
                }
            }
            for(int i=0;i<m;i++){
                if(visit[i][0]==0){
                dfs(grid,visit,m,n,i,0);
                }
            }
            for(int i=0;i<m;i++){
                if(visit[i][n-1]==0){
                dfs(grid,visit,m,n,i,n-1);
                }
            }
            int count=0;
             for(int i=0;i<m;i++){
                 for(int j=0;j<n;j++){
                    if(visit[i][j]==0 and grid[i][j]==1){
                        count++;
                    }    
                 }
                 
             }
            
            
            
            return count;
            
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends
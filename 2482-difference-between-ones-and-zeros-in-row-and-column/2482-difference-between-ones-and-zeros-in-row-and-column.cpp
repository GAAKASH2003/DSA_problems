class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int col[n];
        int row[m];
        vector<vector<int>>mat(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            int sum=0;
            for(int j=0;j<n;j++){
               sum+=grid[i][j]; 
            }
            row[i]=sum;
        }
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<m;j++){
               sum+=grid[j][i]; 
            }
            col[i]=sum;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mat[i][j]=2*(row[i]+col[j])-(m+n);
            }
        }
        return mat;
    }
};
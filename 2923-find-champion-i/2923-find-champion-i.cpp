class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n=grid.size();
        // vector<int>count(n,0);
        int ma=INT_MIN;
        int ind=0;
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            int t=0;
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    t++;
                }
            }
            if(t>=ma){
                ma=t;
                ind=i;  
            }
        }
        return ind;
    }
};
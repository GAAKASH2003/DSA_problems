class Solution {
public:
    
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int m=points.size();
        int n=points[0].size();
        int k=0;
        for(int i=1;i<m;i++){
            k=max(k,points[i][0]-points[i-1][0]);
        }
        
        return k;
    }
};
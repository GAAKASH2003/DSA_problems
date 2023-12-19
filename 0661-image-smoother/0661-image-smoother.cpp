class Solution {
public:
    int avg(int x,int y,int m,int n,vector<vector<int>>& img){
        int count=0;
        int dx[4]={1,0,-1,0};
        int dy[4]={0,-1,0,1};
        int sum=0;
        for(int i=-1;i<=1;i++){
            for(int j=-1;j<=1;j++){
                   int ni=x+i;
                   int nj=y+j;
                if(ni>=0 and ni<m and nj>=0 and nj<n){
                    count++;
                    sum+=img[ni][nj];  
                }
              }
            }
        return floor(sum/count);
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m=img.size();
        int n=img[0].size();
        vector<vector<int>>ans;
        for(int i=0;i<m;i++){
            vector<int>res;
            for(int j=0;j<n;j++){
                res.push_back(avg(i,j,m,n,img));
            }
            ans.push_back(res);
        }
        return ans;
    }
};
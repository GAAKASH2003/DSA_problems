class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& mat) {
        vector<int>ans1;
        vector<int>ans;
        map<int,int>mp;
        
        for(int i=0;i<mat.size();i++){
            if(mp.find(mat[i][0])==mp.end()){
                mp[mat[i][0]]=0;
            }
            mp[mat[i][1]]++;
        }
        
        for(auto x:mp){
            if(x.second==1){
                ans.push_back(x.first);
            }
            if(x.second==0){
                 ans1.push_back(x.first);
            }
        }
        return {ans1,ans};
    }
};
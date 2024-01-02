class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums){
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<vector<int>>vec;
        int count=0;
        while(count!=mp.size()){
            vector<int>ans;
            for(auto x:mp){
                // cout<<x.first<<" ";
                if(mp[x.first]!=0){
                    ans.push_back(x.first);
                    mp[x.first]--;
                    if(mp[x.first]==0){
                        count++;
                    }
                }
            }
            vec.push_back(ans);
            ans.clear();
        }
    return vec;
    }
};
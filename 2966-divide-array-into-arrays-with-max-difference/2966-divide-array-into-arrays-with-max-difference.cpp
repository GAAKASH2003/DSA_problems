class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int t) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int m=n/3;
        vector<vector<int>>ans;
        int k=0;
        for(int i=0;i<m;i++){
            vector<int>res;
            for(int j=0;j<3;j++){
                res.push_back(nums[k]);
                if(k%3==0 and nums[k+2]-nums[k]>t){
                    return {};
                }
                k++;
            }
            ans.push_back(res);
        }
        return ans;
    }
};
class Solution {
public:

    int rec(vector<int>&nums,int ind, vector<int>&dp){
        
        if(ind<0) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int t=nums[ind]+rec(nums,ind-2,dp);
        int nt=rec(nums,ind-1,dp);
        return dp[ind]=max(t,nt);
    }
    int rob(vector<int>& nums) {
       vector<int> dp(9999, -1);
       return rec(nums,nums.size()-1,dp);
    }
};
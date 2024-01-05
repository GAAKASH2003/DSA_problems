class Solution {
public:

    // int rec(vector<int>&nums,int ind,int prev,int n, vector<int>&dp){
    //     if(ind==n){
    //         return 0;
    //     }
    //     if(dp[ind]!=-1) return dp[ind];
    //     int nt=rec(nums,ind+1,prev,n,dp);
    //     int t=0;
    //     if(prev==-1||nums[ind]>nums[prev]){
    //         prev=ind;
    //         t=1+rec(nums,ind+1,prev,n,dp);
    //     }
    //     return dp[ind]=max(t,nt);
    // }

    int lengthOfLIS(vector<int>& nums) {
         int n=nums.size();
        vector<int>dp(n,1);
        int m=1;
       
       for(int i=1;i<n;i++){
           for(int j=0;j<i;j++){
               if(nums[j]<nums[i] and dp[j]+1>dp[i]){
                   dp[i]=dp[j]+1;
                   m=max(m,dp[i]);
               }
           }
       }
    return m;
    }
};
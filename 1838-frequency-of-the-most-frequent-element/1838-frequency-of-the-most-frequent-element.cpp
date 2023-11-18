class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int l=0;
        int n=nums.size();
        int r=0;
        int sum=0;
        long long  curr=0;
        int m=0;
        sort(nums.begin(),nums.end());
        for(r=0;r<nums.size();r++){
        
            long long tar=nums[r];
                curr+=tar;
            
            while((r-l+1)*tar-curr>k){
                curr-=nums[l];
                l++;
            }
            m=max(r-l+1,m);
        }
        return m;
    }
};
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int m=*max_element(nums.begin(),nums.end());
        long long int  count=0;
        long long int res=0;
       for(int i=0,j=0;j<n;j++){
           if(nums[j]==m){
               count++;
           }
            while(count>=k){
                res+=(n-j);
                if(nums[i++]==m){
                    count--;
                }
            }
           
        }
        return res;
        
    }
};
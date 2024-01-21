class Solution {
public:

   
    int rob(vector<int>& nums) {
        int prev1=0;
        int prev2=0;
        for(int i:nums){
            int tmp=prev1;
            prev1=max(prev2+i,prev1);
            prev2=tmp;
        }  
        return prev1;
    }
};
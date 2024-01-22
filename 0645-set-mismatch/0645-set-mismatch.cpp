class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        set<int>s;
        int m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(s.find(nums[i])!=s.end()){
                m=nums[i]; 
            }
            s.insert(nums[i]);
        }
        int r;
        for(int i=1;i<=n;i++){
            if(s.find(i)==s.end()) r=i; 
        }
        return {m,r};
    }
};
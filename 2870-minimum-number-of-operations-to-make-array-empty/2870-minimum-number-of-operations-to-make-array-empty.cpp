class Solution {
public:
    int fun(int n){
        int m=0;
         if(n%3==2){
                m+=(n/3)+1;
            }
            if(n%3==1){
                m+=(n/3-1)+2;
            }
            if(n%3==0){
                m+=n/3;
            }
        return m;
    }
        
    
    int minOperations(vector<int>& nums){
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int m=0;
//         1,7,13,19,37.
        
        for(auto x:mp){
            if(x.second==1){
                return -1;
            }
            m+=fun(x.second);
        }
        return m;
    }
};
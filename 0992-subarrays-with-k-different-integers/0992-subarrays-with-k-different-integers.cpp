class Solution {
public:
    int atmost(vector<int>&arr,int k){
        int i=0,j=0,count=0;
        map<int,int>mp;
        while(i<arr.size()){
            mp[arr[i]]++;
            
            while(mp.size()>k){
                mp[arr[j]]--;
                if(mp[arr[j]]==0){
                    mp.erase(arr[j]);
                }
                j++;
            }
             count+=(i-j+1);
             i++;
        }
        return count;  
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
};
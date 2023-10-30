class Solution {
public:
    
    int setbit(int n){
        int count=0;
        for(int i=0;i<31;i++){
            if(n&(1<<i)){
                count++;
            }
        }
        return count;
    }
   static bool comp(pair<int,int>&a,pair<int,int>&b){
        if(a.second==b.second){
            return a.first<b.first;
        }
        return a.second<b.second;
        
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>v;
        int n=arr.size();
        for(int i=0;i<n;i++){
            v.push_back({arr[i],setbit(arr[i])});
        }
        sort(v.begin(),v.end(),comp);
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};
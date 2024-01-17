class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        for(auto x:arr){
            mp[x]++;
            
        }
        set<int>s;
        for(auto x:mp){
            if(s.find(x.second)!=s.end()){
                return false;
            }
            s.insert(x.second);
        }
        return true;
    }
};
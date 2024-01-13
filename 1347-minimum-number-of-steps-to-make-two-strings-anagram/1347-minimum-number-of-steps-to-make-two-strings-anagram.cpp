class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>mp;
        map<char,int>mp1;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            mp1[t[i]]++;
        }
        int count=0;
        for(auto [x,p]:mp){
            if((mp[x]-mp1[x])>0){
                // cout<<mp[x]<<mp1[x];
            count+=abs(mp[x]-mp1[x]);
         }
        }
        return count;
    }
};
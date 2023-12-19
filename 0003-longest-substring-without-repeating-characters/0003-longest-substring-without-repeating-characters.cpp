class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_map<char,int>mp;
       int n=s.length();
        int l=0;
        int m=0;
       int ans=0;
       for(int i=0;i<n;i++){
           if(mp.find(s[i])!=mp.end()){
             l=max(l,mp[s[i]]+1);
         }
         mp[s[i]]=i;
         m=max(m,i-l+1);
       }
        return m;
    }
};
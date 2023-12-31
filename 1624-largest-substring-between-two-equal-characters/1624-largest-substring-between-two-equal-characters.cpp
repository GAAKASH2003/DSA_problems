class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        map<char,int>mp;
        int n=s.length();
        int l=-1;
        for(int i=0;i<n;i++){
            if(mp.find(s[i])!=mp.end()){
                l=max(i-mp[s[i]]-1,l);
            }
            else{
                mp[s[i]]=i;
            }
            
        }
        return l;
    }
};
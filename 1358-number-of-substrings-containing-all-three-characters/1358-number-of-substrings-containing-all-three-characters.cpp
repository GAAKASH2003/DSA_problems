class Solution {
public:
    int atmost(string s,int k){
        int i=0,j=0,count=0;
        map<char,int>mp;
        int n=s.length();
        while(i<n){
            mp[s[i]]++;
            while(mp.size()>k){
                    mp[s[j]]--;
                    if(mp[s[j]]==0){
                        mp.erase(s[j]);
                    }
                    j++;
                }
            count+=(i-j)+1;
            i++;
        }
        return count;
    }
    int numberOfSubstrings(string s) {
        return atmost(s,3)-atmost(s,2);    
    }
};
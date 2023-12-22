class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>mp(128,0);
        int d=0,first=0,end=0,counter=0;
        int head=0;
        int n=s.length();
        while(end<n){
            if(mp[s[end++]]++>0){
                counter++;
            }
            while(counter>0){
                if(mp[s[first++]]-->1)counter--;
            }
            d=max(end-first,d);
        }
        
      return d;
    }
};
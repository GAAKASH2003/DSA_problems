class Solution {
public:
    string longestCommonPrefix(vector<string>& strs){
        int n=strs.size();
        int m=INT_MAX;
        if(strs[0]=="") return "";
        if(n==1) return strs[0];
        for(int i=1;i<n;i++){
            int l=0;
            
            int j=0;
            while(j<strs[i].length() and strs[i][j]==strs[0][j]){
                l++;
                j++;
            }
            m=min(l,m);
        }
        // cout<<m;
        if(m==0) return "";
        return strs[0].substr(0,m);
    }
};
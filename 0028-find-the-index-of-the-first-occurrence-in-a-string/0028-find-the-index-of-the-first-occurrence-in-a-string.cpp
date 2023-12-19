class Solution {
public:
    int strStr(string p, string s) {
        int m=s.length();
        int n=p.length();
        if(n==1 and m==1){
            if(p==s) return 0;
        }
        for(int i=0;i<n-m+1;i++){
            int j;
            for(j=0;j<m;j++){
                if(p[i+j]!=s[j])
                    break;
            if(j==m-1){
                    return i;
                }               
        }
    }
    return -1;
}};
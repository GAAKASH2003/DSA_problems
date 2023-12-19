class Solution {
public:
 string pal(string s,int l,int r){
     while(l>=0 and r<=s.length()-1){
         if(s[l]==s[r]){
             l--;
             r++;
         }
         else break;
     }
     return s.substr(l+1,r-l-1);
  }

    string longestPalindrome(string s) {
       int n=s.length();
        int len=0;
        string res;
      
        for(int i=0;i<n;i++){
            string curr=pal(s,i,i);
        
            if(len<curr.length()){
                len=curr.length();
                res=curr;
            }
            curr=pal(s,i,i+1);
            if(len<curr.length()){
                res=curr;
                len=curr.length();
                cout<<curr<<" ";
            }
            }
        
        return res;
    }
};
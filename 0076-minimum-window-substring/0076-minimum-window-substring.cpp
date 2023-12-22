class Solution {
public:
    string minWindow(string s, string t) {
        
        vector<int>freq(128,0);
        int counter=t.size(),head=0,d=INT_MAX;
        int first=0,end=0;
        int m=s.length();
        int n=t.length();
        
      
        for(int i=0;i<n;i++){
            freq[t[i]]++;
        }
        
        while(end<m){
            if(freq[s[end++]]-->0){
                counter--;
            }
            while(counter==0){
                if(d>(end-first)){
                    head=first;
                    d=end-first;
                }
                if(freq[s[first++]]++==0 ) counter++;
            }
        }
       if(d==INT_MAX) return "";
       return s.substr(head,d);
    }
};
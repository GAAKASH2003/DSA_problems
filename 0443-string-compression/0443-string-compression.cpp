class Solution {
public:
    int compress(vector<char>& chr){
        vector<pair<char,int>>v;
        int i=0,j=0;
        int n=chr.size();
        while(j<n){
            if(chr[i]==chr[j]){
                j++;   
               
            }
            else{
                v.push_back({chr[i],j-i});
                i=j;
            }
        }
        v.push_back({chr[i],j-i});
        int count=0;
        chr.clear();
        for(auto x:v){
          chr.push_back(x.first);
          if(x.second!=1){  
          string st=to_string(x.second); 
          for(int i=0;i<st.length();i++){
              chr.push_back(st[i]); 
          }}  
        }    
        return chr.size();  
    }
};
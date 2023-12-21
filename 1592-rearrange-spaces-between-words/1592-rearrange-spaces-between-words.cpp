class Solution {
public:
    pair<vector<string>,int>extract(string s){
       int i=1;
        int j=0;
        vector<pair<int,int>>v;
        int flag=0;
        int start;
        int end;
        int n=s.length();
      
        while(i<n){
            if((i+1==n and s[i]!=' ' and s[j]==' ') or (j==0 and s[j]!=' ' and s[i]==' ')){
                if(j==0){
                    v.push_back({j,1});
                }
                else{
                    v.push_back({i,1});
                }
            }
            else if((j==0 and s[j]!=' ') or (s[j]==' ' and s[i]!=' ')){
                if(j==0 and s[j]!=' '){
                    // cout<<j;
                    start=j;
                }
                else{
                    
                    start=i;
                }
               
            }
            else if((i==n-1 and s[i]!=' ')or (s[i]==' ' and s[j]!=' ')){
                if(i==n-1 and s[i]!=' '){
                    end=i;    
                }
                else{
                    end=j;
                }
                v.push_back({start,end-start+1});
            }
         
            
            i++;
            j++;
        }
        vector<string>ans;
        int count=0;
        for(int i=0;i<v.size();i++){
            ans.push_back(s.substr(v[i].first,v[i].second));
            count+=v[i].second;
        }
        return {ans,count};
    }
     string spac(int gapl){
        string ans="";
        for(int i=0;i<gapl;i++){
            ans+=" ";
        }
        return ans;
    }
    
    string reorderSpaces(string text) {
        if(text.length()==1) return text;
        vector<string>ans=extract(text).first;
        int l=extract(text).second;
       
        if(ans.size()==1){
            return ans[0]+spac(text.length()-l);
        }
        int gapl=(text.length()-l)/(ans.size()-1);
        int ex=(text.length()-l)%(ans.size()-1);
        string res="";
        
        
        for(int i=0;i<ans.size();i++){
            if(i==ans.size()-1){
                res+=ans[i]+spac(ex);
                continue;
            }
            res+=ans[i]+spac(gapl);
        }
        return res;
    }
};
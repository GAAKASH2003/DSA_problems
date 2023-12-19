class Solution {
public:
    string reverseWords(string s) {
        int i=1;
        int j=0;
        vector<pair<int,int>>v;
        int flag=0;
        int start;
        int end;
        int n=s.length();
        if(n==1) return s;
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
        string ans="";
        // cout<<v.size();
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            cout<<v[i].first<<" "<<v[i].second<<endl;
            ans+=s.substr(v[i].first,v[i].second);
            if(i!=v.size()-1){
            ans+=" ";}
        }
         
        return ans.substr(0,ans.length());}
       };
        
    

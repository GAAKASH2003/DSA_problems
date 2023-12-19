class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n=s.length();
        stack<pair<char,int>>st;
        
        for(int i=0;i<n;i++){
            if(s[i]=='(' or s[i]==')'){
                // cout<<
                if(st.empty() or s[i]=='('){
                    // cout<<i;
                    st.push({s[i],i});
                }
                else if(s[i]==')' and st.top().first=='('){
                    st.pop();
                }
                else{
                     st.push({s[i],i});
                }
            }
        }
        if(st.empty()){
            // cout<<"hello";
            return s;
        }
        set<int>r;
        while(!st.empty()){
            r.insert(st.top().second);
            st.pop();    
        }
        string ans;
        for(int i=0;i<n;i++){
            if(r.find(i)==r.end()){
                ans+=s[i];
            }
        }
        return ans;
        
    }
};
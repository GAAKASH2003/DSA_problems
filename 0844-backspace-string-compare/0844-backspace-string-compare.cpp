class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int>st;
        string ans1="";
        string ans2="";
        int n1=s.length();
        int n2=t.length();
        for(int i=0;i<n1;i++){
            if(s[i]=='#' and !st.empty()){
                st.pop();
                continue;
            }
            if(st.empty() and s[i]=='#') continue;
            st.push(s[i]);
        }
        while(!st.empty()){
            ans1+=st.top();
            st.pop();
        }
         for(int i=0;i<n2;i++){
            if(t[i]=='#' and !st.empty()){
                st.pop();
                continue;
            }
             if(st.empty() and t[i]=='#') continue;
             
            st.push(t[i]);
        }
        while(!st.empty()){
            ans2+=st.top();
            st.pop();
        }
        
        return ans1==ans2;
        
        
    }
};
class Solution {
public:
    
   
    int longestValidParentheses(string s) {
       stack<int>st;
        st.push(-1);
        int ma=0;
        // int n=;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                st.pop();
                if(st.empty()){
                    st.push(i);
                }
                else{
                
                    ma=max(ma,i-st.top());
                }
            }
        }
        return ma;
    }
};
class Solution {
public:
    
   
    int longestValidParentheses(string s) {
       stack<int>st;
        st.push(-1);
        int ma=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                st.pop();
                if(st.empty()){
                    st.push(i);
                }
                else{
                    int len=i-st.top();
                    ma=max(ma,len);
                }
            }
        }
        return ma;
    }
};
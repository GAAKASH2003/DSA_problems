class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for(auto x:tokens){
            if(x=="+" or x=="-" or x=="*" or x=="/"){
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                int ans;
               
                if(x=="+"){
                    ans=a+b;
                }
                if(x=="-"){
                    ans=b-a;
                }
                if(x=="*"){
                    ans=a*b;
                }
                if(x=="/"){
                    ans=b/a;
                }
                // cout<<a<<" "<<b<<" "<<ans<<" ";
                s.push(ans);
            }
            else{
                s.push(stoi(x));
            }
        }
        return s.top();
    }
};
class Solution {
public:

   bool check(string curr){
    stack<char>s;
    for(int i=0;i<curr.length();i++){
       if(s.empty() or curr[i]=='('){
           s.push('(');
       }
       else{
           if(s.empty()) return false;
           else if(curr[i]==')' and s.top()=='('){
               s.pop();
           }
           else{
               return false;
           }
       }}
       return (s.empty()==true);
   } 

   void rec(int n,string curr,vector<string>&ans,int open,int close){
       if(curr.length()==n*2){
           if(check(curr)){
           ans.push_back(curr);
           }
          
           return;
       }
            if(open<=n){
           rec(n,curr+'(',ans,open+1,close);}
           if(close<open){ 
           rec(n,curr+')',ans,open,close+1);}
       
   }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        rec(n,"",ans,0,0);
        return ans;
    }
};
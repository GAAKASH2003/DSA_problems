class Solution {
public:
    void rec(string dig,map<char,string>mp,int ind,vector<string>&ans,string temp){
        if(ind==dig.size()){
            ans.push_back(temp);
            return ;
        }
        for(auto x:mp[dig[ind]]){
            temp+=x;
            rec(dig,mp,ind+1,ans,temp);
            temp.pop_back();
        }
        // rec(dig,mp,ind+1,ans,temp);
    }
    vector<string> letterCombinations(string dig) {
        map<char,string>mp;
        mp['2']="abc"; 
        mp['3']="def"; 
        mp['4']="ghi"; 
        mp['5']="jkl"; 
        mp['6']="mno"; 
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        vector<string>ans;
        if(dig=="") return {};
        rec(dig,mp,0,ans,"");
        return ans;
    }
};
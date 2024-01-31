class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int>ans;
        ans.push_back(0);
        stack<int>s;
        s.push(t.size()-1);
        for(int i=t.size()-2;i>=0;i--){
            while(!s.empty() and t[s.top()]<=t[i]){
                s.pop();
            }
            int k=s.empty()?0:s.top()-i;
            ans.push_back(k);
            s.push(i);
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};
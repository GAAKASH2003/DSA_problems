class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string>s;
        int n=paths.size();
        for(int i=0;i<n;i++){
            s.insert(paths[i][1]);
        }
        for(int i=0;i<n;i++){
            if(s.find(paths[i][0])!=s.end()){
                s.erase(paths[i][0]);
            }
        }
        // cout<<s.size();
        auto it=s.begin();
        return *it;
    }
};
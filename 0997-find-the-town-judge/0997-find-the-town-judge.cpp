class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>>adj(n+1);
        int sum=0;
        set<int>s;
        for(int i=0;i<trust.size();i++){
            adj[trust[i][1]].push_back(trust[i][0]);
            s.insert(trust[i][0]);
           
        }
        for(auto x:s){
             sum+=x;
        }
        int m=(n*(n-1))/2+n;
        m-=sum;
        int ans=-1;
        for(int i=1;i<=n;i++){
            if(adj[i].size()==n-1){
                ans=i;
            }
        }
        if(m==ans) return ans;
      
        return -1;
    }
};
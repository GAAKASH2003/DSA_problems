class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int>adj[n];
        int m=edges.size();
        for(int i=0;i<m;i++){
            adj[edges[i][0]].push_back(edges[i][1]);
        }
        int a=-1;
        map<int,int>mp;
        for(int i=0;i<n;i++ ){
            for(int j=0;j<adj[i].size();j++){
            // if(a==-1 and adj[i].size()==0){
            //     a=i;}
            // else if(adj[i].size()==0){
            //     a=-1;
            // }
                mp[adj[i][j]]++;
            
            }
        }
        if(mp.size()<n-1){
            return -1;
        }
        for(int i=0;i<n;i++){
            if(mp[i]==0){
                return i;
            }
        }
        return -1;
        
    }
};
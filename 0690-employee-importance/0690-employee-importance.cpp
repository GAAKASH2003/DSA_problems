/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int count=0;
    void rec(vector<vector<int>>&adj,int x, vector<int>&imp){
        count+=imp[x];
        for(auto it:adj[x]){
            rec(adj,it,imp);
        }
        return;
    }
    int getImportance(vector<Employee*> emp, int id) {
        int n=emp.size();
        vector<vector<int>>adj(2000);
        vector<int>imp(2000,0);
        for(int i=0;i<n;i++){
            int ide=emp[i]->id;
            imp[ide]=emp[i]->importance;
            vector<int>ans=emp[i]->subordinates;
            for(int i=0;i<ans.size();i++){
                adj[ide].push_back(ans[i]);
            }
        }
        rec(adj,id,imp);
     return count;   
    }
};
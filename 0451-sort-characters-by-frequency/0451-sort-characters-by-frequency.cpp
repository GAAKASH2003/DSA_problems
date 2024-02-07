class Solution {
public:
    
  static bool comp(const pair<int,int>&a,const pair<int,int>&b){
      return a.first>b.first;
  }
    string frequencySort(string s) {
       map<char,int>mp;
        for(auto x:s){
            mp[x]++;
        }
      
        vector<pair<int,char>>v;
        for(auto x:mp){
            v.push_back({x.second,x.first});
        }
        sort(v.begin(),v.end(),comp);
        string str="";
        for(int i=0;i<v.size();i++){
           for(int j=0;j<v[i].first;j++){
               str+=v[i].second;
           }
        }
        return str;
    }
};
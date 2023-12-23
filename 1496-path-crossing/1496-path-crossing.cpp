class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>>s;
        s.insert({0,0});
        pair<int,int> prev={0,0};
        for(auto x:path){
            if(x=='N'){
                prev={prev.first,prev.second+1};
                if(s.find(prev)!=s.end()) return true;
                s.insert(prev);
            }
            else if(x=='S'){
                prev={prev.first,prev.second-1};
                if(s.find(prev)!=s.end()) return true;
                s.insert(prev);
            }
            else if(x=='E'){
                prev={prev.first-1,prev.second};
                if(s.find(prev)!=s.end()) return true;
                s.insert(prev);
            }
            else{
                prev={prev.first+1,prev.second};
                if(s.find(prev)!=s.end()) return true;
                s.insert(prev);
            }
        }
        return false;
    }
};
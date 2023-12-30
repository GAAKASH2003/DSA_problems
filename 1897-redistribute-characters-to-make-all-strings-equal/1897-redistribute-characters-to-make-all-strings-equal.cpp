class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n=words.size();
        map<char,int>mp;
        int s=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<words[i].length();j++){
                mp[words[i][j]]++;   
            }
            s+=words[i].length();
        }
        int k=0;
         for (auto it = mp.begin(); it != mp.end(); ++it) {
            if(it->second%n!=0){
                return false;
            }
    }
 
        return true;
    }
};
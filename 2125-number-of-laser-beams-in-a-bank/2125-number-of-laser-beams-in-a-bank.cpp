class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        if(n==1) return 0;
        int m=bank[0].size();
        int p=0;
        vector<int>ans;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<bank[i].length();j++){
                if(bank[i][j]=='1'){
                    count++;
                }
            }
            if(count!=0){
            ans.push_back(count);}
        }
        
        int i=0;
        if(ans.size()==0) return 0;
        while(i<ans.size()-1){
            p+=ans[i]*ans[i+1];
            i++;
        }
        return p;
    }
    
};
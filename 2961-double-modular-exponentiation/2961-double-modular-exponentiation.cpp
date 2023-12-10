class Solution {
public:
    
    int fun1(int a,int b,int c){
        long long int res=1;
        while(b>0){
            if(b&1){
                res=res*(a%c);
            }
            a=(a%c)*(a%c);
            b=b>>1;
        }
        return res%c;
    }
    vector<int> getGoodIndices(vector<vector<int>>& var, int t) {
        vector<int>ans;
        long long int res1;
        int n=var.size();
        for(int i=0;i<n;i++){
            long long int res=fun1(var[i][0],var[i][1],10);
            int res2=(fun1(res,var[i][2],var[i][3]));
                      if(res2==t){
                          ans.push_back(i);
                      }
        }
           
        return ans;
    }
};
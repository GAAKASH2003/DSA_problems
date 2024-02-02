class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        string num="123456789";
        string str="";
        for(int i=1;i<=9;i++){
            for(int j=0;j+i<=9;j++){
                str=num.substr(j,i);
                if(stoi(str)>=low&&stoi(str)<=high){
                    ans.push_back(stoi(str));
                }
                else if(stoi(str)>high){
                    return ans;
                }
            }
        }
        return ans;
    }
};
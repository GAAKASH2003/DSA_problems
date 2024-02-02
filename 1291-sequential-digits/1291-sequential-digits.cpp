class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>res;
        string s="123456789";
        int start=0;
        string str="";
        int m=log10(low);
        int l=0;
    for(int j=1;j<=9;j++){
        for(int i=0;i+j<=9;i++){
                str=s.substr(i,j);
                if(stoi(str)>=low and stoi(str)<=high){
                    res.push_back(stoi(str));   
                }
                if(stoi(str)>high){
                    return res;
                }
            }
        }
        return res;
    }
};
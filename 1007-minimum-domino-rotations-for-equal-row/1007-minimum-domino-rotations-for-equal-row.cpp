class Solution {
public:
    int minDominoRotations(vector<int>& t, vector<int>& b) {
        int n=t.size();
        int count1=0;
        int count2=1;
        int count3=1;
        int count4=0;


        for(int i=1;i<n;i++){
            if(t[i]==t[0]){
                continue;
            }
            else if(b[i]==t[0]){
                count1++;
            }
            else{
                count1=INT_MAX;
                break;
            }
        }
        for(int i=1;i<n;i++){
            if(t[i]==b[0]){
                continue;
            }
            else if(b[i]==b[0]){
                count2++;
            }
            else{
                count2=INT_MAX;
                break;
            }
        }
         for(int i=1;i<n;i++){
            if(b[i]==t[0]){
                continue;
            }
            else if(t[i]==t[0]){
                count3++;
            }
            else{
                count3=INT_MAX;
                break;
            }
        }
        for(int i=1;i<n;i++){
            if(b[i]==b[0]){
                continue;
            }
            else if(t[i]==b[0]){
                count4++;
            }
            else{
                count4=INT_MAX;
                break;
            }
        }
        int k=min(count1,count2);
        int p=min(count3,min(k,count4));
        if(p==INT_MAX) return -1;
        return p;
        
        
        
        
    }
};
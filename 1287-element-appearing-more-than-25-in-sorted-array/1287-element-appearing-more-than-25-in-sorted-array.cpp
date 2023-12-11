class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        float k=(float)n/4;
        cout<<k;
        int count=1;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                count++;
            }
            else{
                
                count=1;
            }
            if(count>k){
                return arr[i];
            }}
        
        return arr[0];
    }
};
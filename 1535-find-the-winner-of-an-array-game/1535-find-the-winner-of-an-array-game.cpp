class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        if(k==1){
            return max(arr[0],arr[1]);
        }
        int n=arr.size();
        int ma=0;
         for(int i=0;i<n;i++){
                ma=max(arr[i],ma);
            }
        if(k>=arr.size()){
            
            for(int i=0;i<n;i++){
                ma=max(arr[i],ma);
            }
            return ma;
        }
        int curr=arr[0];
        int count=0;
        for(int i=1;i<n;i++){
            if(arr[i]<=curr){
                count++;
            }
            else{
                count=1;
                curr=arr[i];
            }
            if(count==k){
                return curr;
            }
        }
        
        return ma;
    }
};
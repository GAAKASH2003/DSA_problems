class Solution {
public:
    int search(vector<int>& arr, int target) {
        int l=0;
        int r=arr.size()-1;
        while(l<=r){
            int m=(l+r)/2;
            if(arr[m]==target){
                return m;
            }
            else if(arr[l]<=arr[m]){
                if(target>=arr[l] and target<=arr[m]){
                    r=m-1;
                }
                else{
                    l=m+1;
                }
            }
            else{
                 if(target>=arr[m] and target<=arr[r]){
                    l=m+1;
                }
                else{
                    r=m-1;
                }
            }
        }
        return -1;
    }
};
class Solution {
public:

    
    void nextPermutation(vector<int>& arr) {

        // int n=arr.size();
        // int ind=-1;
        // for(int i=n-2;i>=0;i--){
        //       if(arr[i+1]>arr[i]){
        //           ind=i;
        //           break;
        //       }  
        // }  
        // if(ind==-1){
        //     reverse(arr.begin(),arr.end());
        // }
        // else{
        //     for(int i=n-1;i>=0;i--){
        //      if(arr[i]>arr[ind]){
        //         swap(arr[i],arr[ind]);
        //         int k=ind+1;
        //         int l=n-1;
        //         while(k<l){
        //             swap(arr[k],arr[l]);
        //             k++;
        //             l--;
        //         }
        //         break;
        //      }
        //  } 
        // }
        next_permutation(arr.begin(),arr.end());
    }
};
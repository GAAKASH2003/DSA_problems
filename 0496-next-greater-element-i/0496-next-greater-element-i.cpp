class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
         int n=nums2.size();
        vector<int>v(n,0);
        vector<int>ans;
       
        stack<int>st;
        v[n-1]=-1;
        st.push(nums2[n-1]);
        map<int,int>mp;
        mp[nums2[0]]=0;
        
        for(int i=n-1;i>=0;i--){
        while(!st.empty() and st.top()<=nums2[i]){
                st.pop();
        }
         if(st.empty()){
               v[i]=(-1);
         }
        else{
                v[i]=(st.top());       
            }
             st.push(nums2[i]);
            mp[nums2[i]]=i;
        }
        for(int i=0;i<nums1.size();i++){
            if(mp.find(nums1[i])!=mp.end()){
                ans.push_back(v[mp[nums1[i]]]);
            }
        }
       return ans;
    }
};
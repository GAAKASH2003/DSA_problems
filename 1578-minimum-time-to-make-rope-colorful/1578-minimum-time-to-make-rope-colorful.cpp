class Solution {
public:
    int minCost(string col, vector<int>& m) {
           int n=col.length();
           int total=0;
           int start=0;
           int end=0;
        while(start<n and end<n){
            int gt=0;
            int t=0;
            while(end<n and col[start]==col[end]){
                gt+=m[end];
                t=max(t,m[end]);
                end++;
            }
            total+=(gt-t);
            start=end;
        }
        return total;
    }
};
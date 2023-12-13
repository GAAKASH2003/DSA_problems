class Solution {
public:
    bool check1(vector<vector<int>>& mat,int j){
        int n=mat[0].size();
        int count=0;
        for(int i=0;i<n;i++){
            if(mat[j][i]==1){
                count++;
            }
        }
        return (count==1);
    }
    bool check2(vector<vector<int>>& mat,int j){
        int n=mat.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(mat[i][j]==1){
                count++;
            }
        }
        return (count==1);
    }
    int numSpecial(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int count=0;
      for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
              if(mat[i][j]==1 and check2(mat,j) and  check1(mat,i)){
                  count++;
              }
          }
      }  
     return count;   
    }
};
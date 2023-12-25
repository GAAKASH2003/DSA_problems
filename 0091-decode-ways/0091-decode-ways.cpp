class Solution {
public:

    long long int mod =1e9+7; 
	    long long int rec(string str,int i,int n,vector<int>&dp){
	        
	        if(i==n){
	            return 1;
	        }
	        if(i>n){
	            return 0;
	        }
	        if(dp[i]!=-1) return dp[i];
	        int one =0,two=0;
	        if(str[i]>='1' and str[i]<='9'){
	            one=rec(str,i+1,n,dp);
	        }
	        string part=str.substr(i,2);
	        if(part>="10" and part<="26" and i+2<=n){
	            two=rec(str,i+2,n,dp);
	        }
	        return dp[i]=(two+one);
	    } 
    int numDecodings(string s) {
         int n=s.size();
		    vector<int>dp(n+1,-1);
		    return rec(s,0,n,dp);
    }
};
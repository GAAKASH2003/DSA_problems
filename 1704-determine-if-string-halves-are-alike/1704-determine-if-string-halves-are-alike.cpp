class Solution {
public:
    bool halvesAreAlike(string s) {
        int a=0;
       
        int n=s.length();
        for(int i=0;i<n;i++){
            if(i<n/2){
                if(s[i]=='a' or s[i]=='A'){
                    a++;
                }
                if(s[i]=='e' or s[i]=='E'){
                    a++;
                }
                if(s[i]=='i' or s[i]=='I'){
                    a++;
                }
                if(s[i]=='o' or s[i]=='O'){
                    a++;
                }
                if(s[i]=='u' or s[i]=='U'){
                    a++;
                }
            }
            else{
                if(s[i]=='a' or s[i]=='A'){
                    a--;
                }
                if(s[i]=='e' or s[i]=='E'){
                    a--;
                }
                if(s[i]=='i' or s[i]=='I'){
                    a--;
                }
                if(s[i]=='o' or s[i]=='O'){
                    a--;
                }
                if(s[i]=='u' or s[i]=='U'){
                    a--;
                }   
            } 
        }
        return (a==0);
    }
};
class Solution {
public:
    int countSubstrings(string s) {
        int n= s.length();
        bool dp[n+1][n+1];
        int count=0;
        for(int g=0;g<n;g++){
            for(int i=0, j=g; j<n ;i++,j++){
                if(g==0) dp[i][j]=true;
                else if(g==1) dp[i][j]= s[i]==s[j];
                else{
                    if(s[i]==s[j] && dp[i+1][j-1]) dp[i][j]=true;
                    else dp[i][j]=false;
                }
                if(dp[i][j]==true) count++;
            }
        }
        return count;
    }
};
class Solution {
public:
    int minDistance(string s1, string s2) {
        int n= s1.length(), m= s2.length();
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0) dp[i][j]=j;
                else if(j==0) dp[i][j]=i;
                else{
                    if(s1[i-1]==s2[j-1]) dp[i][j]= dp[i-1][j-1];
                    else{
                        int f1= 1+dp[i-1][j-1];
                        int f2= 1+dp[i-1][j];
                        int f3= 1+dp[i][j-1];
                        dp[i][j]= min(f3, min(f1,f2));
                    }
                }
            }
        }
        return dp[n][m];
    }
};
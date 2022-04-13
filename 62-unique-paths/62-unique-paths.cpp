class Solution {
public:
    int uniquePaths(int m, int n) {
       int dp[m+1][n+1];
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(i==1) dp[i][j]=1;
                else if(j==1) dp[i][j]=1;
                else{
                    dp[i][j]= dp[i][j-1]+dp[i-1][j];
                }
            }
        }
       return dp[m][n];
    }
};
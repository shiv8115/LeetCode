class Solution {
public:
    int uniquePaths(int m, int n) {
        // int dp[m][n];
        // for(int i=m-1;i>=0;i--){
        //     for(int j=n-1;j>=0;j--)
        //     {
        //         if(i==m-1) dp[i][j]=1;
        //         else if(j==n-1) dp[i][j]=1;
        //         else{
        //             dp[i][j]= dp[i+1][j]+ dp[i][j+1];
        //         }
        //     }
        // }
        // return dp[0][0];
        int N= m+n-2;
        int r= m-1;
        double res= 1.0;
        for(int i=1;i<=r;i++) res= res*(N-r+i)/i;
        
        return (int)res;
        
    }
};
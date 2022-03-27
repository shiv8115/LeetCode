class Solution {
public:
    // int lcs(string s1, string s2){
    //     int n= s1.length(), m= s2.length();
    //     int dp[n+1][m+1];
    //     for(int i=0;i<=n; i++){
    //         for(int j=0;j<=m;j++){
    //             if(i==0) dp[i][j]=0;
    //             else if(j==0) dp[i][j]=0;
    //             else{
    //                 if(s1[i-1]==s2[j-1]) 
    //                     dp[i][j]= dp[i-1][j-1]+1;
    //                 else dp[i][j]= max(dp[i+1][j], dp[i][j+1]);
    //             }
    //         }
    //     }
    //     return dp[n][m];
    // }
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        int dp[x+1][y+1];
        for(int i=0;i<=x;i++) dp[i][0]=0;
        for(int j=0;j<=y;j++) dp[0][j]=0;
        for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                if(s1[i-1]==s2[j-1])
                dp[i][j]=1+dp[i-1][j-1];
                else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[x][y];
    }
    int minDistance(string word1, string word2) {
        int n1= word1.size();
        int n2= word2.size();
        int len= lcs(n1, n2, word1, word2);
        int del= n1-len;
        int ins= n2-len;
            return del+ins;
    }
};
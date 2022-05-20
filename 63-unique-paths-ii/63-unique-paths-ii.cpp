class Solution {
public:
    //int mod= (int)(1e9+7);
    int solve(int i, int j,vector<vector<int>>&mat, vector<vector<int>>& dp ){
        if(i>=0 && j>=0 && mat[i][j]==1) return 0;
        if(i==0 && j==0) return 1;
        if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int up=0,left=0;
        if(i>0) up= solve(i-1,j,mat,dp);
        if(j>0) left= solve(i,j-1,mat,dp);
        return dp[i][j]= (up+left);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& Grid) {
        int n= Grid.size();
        int m= Grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(n-1,m-1,Grid,dp);
    }
};
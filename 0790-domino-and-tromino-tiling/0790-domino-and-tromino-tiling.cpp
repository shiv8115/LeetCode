class Solution {
public:
    // up -> can be 0 or 1, 0 means there is no tile in a cell in first row and 1 means there is a tile in a cell in first row
    // down -> can be 0 or 1, 0 means there is no tile in a cell in second row and 1 means there is a tile in a cell in second row
    // dp[i][up][down] -> number of ways to fill the first i columns of the grid with the above constraints 
    int dp[1001][3][3];
    int mod=1000000007;
    int rec(int i, int n, int up, int down){
        if (i==n+1){ // base case, if we reach out of the grid
            if (up+down==0) return 1; // No tile should be present in out of the grid, then that will be a valid way
            return 0;
        } 

        if (dp[i][up][down]!=-1) // If already calculated, then return the value
            return dp[i][up][down];

        if (up+down==2) // If both rows have a tile. 
            return dp[i][up][down]=rec(i+1, n, 0, 0); // Move to next column and in the next column, we have no tile, so both up and down are 0.

        else if (up+down==0){ // If both rows have no tile
            int a=rec(i+1, n, 0, 0); // Fill with one tile of size 2x1, so for the next column up and down will be zero.
            int b=rec(i+1, n, 1, 1); // Fill with two tiles of size 1x2, so for the next column up and down will be one.
            int c=rec(i+1, n, 1, 0); // Fill with tromino such that in the next column, up has a tile and down hasn't.
            int d=rec(i+1, n, 0, 1); // Fill with tromino such that in the next column, down has a tile and up hasn't.
            return dp[i][up][down]=((long long)a+b+c+d)%mod; // Return the total number of ways.
        }

        else if (up==1){ // If only up has a tile
            int a=rec(i+1, n, 1, 1); // Fill with a tromino covering the down and so in the next column, both up and down will have a tile.
            int b=rec(i+1, n, 0, 1); // Fill with a tile 1x2 covering the down and so in the next column, up will have no tile and down will have a tile.
            return dp[i][up][down]=((long long)a+b)%mod;
        }

        else if (down==1){ // If only down has a tile
            int a=rec(i+1, n, 1, 1); // Fill with a tromino covering the up and so in the next column, both up and down will have a tile.
            int b=rec(i+1, n, 1, 0); // Fill with a tile 1x2 covering the up and so in the next column, up will have a tile and down will have no tile.
            return dp[i][up][down]=((long long)a+b)%mod;
        }
        
        return 0;
    }
    int numTilings(int n) {
        memset(dp, -1, sizeof(dp));
        return rec(1, n, 0, 0);
    }
};
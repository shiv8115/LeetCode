class Solution {
public:
    // Reuse 0733 - Flood Fill (Easy) Solution
    // we need to find tune the type (int -> char) from that solution
    // https://wingkwong.github.io/leetcode-the-hard-way/solutions/0700-0799/flood-fill-easy
    int dirx[4] = { -1, 0, 0, 1};
    int diry[4] = { 0, 1, -1, 0};
    // the idea is to use bfs to paint the cell with value '1' starting from (sr, sc)
    void floodFill(vector<vector<char>>& image, int sr, int sc, char newColor) {
        // record the original color
        int oriColor = image[sr][sc];
        // if it is same as the one we want to paint, then skip
        if (oriColor == newColor) return;
        int n = image.size(), m = image[0].size();
        // standard bfs
        queue<pair<int, int>> q;
        q.push({sr, sc});
        while(!q.empty()) {
            auto [x, y] = q.front(); q.pop();
            // paint the new color here so that we won't visit it again
            image[x][y] = newColor;
            // after painting the cell at (x, y), we try four different directions
            for(int i = 0; i < 4; i++) {
                int next_x = x + dirx[i];
                int next_y = y + diry[i];
                // we need to make sure that the next cell is valid and the color isn't same as the orginal color
                if(next_x < 0 || next_y < 0 || next_x > n - 1 || next_y > m - 1 || image[next_x][next_y] != oriColor) continue;
                // paint it with the new color
                image[next_x][next_y] = newColor;
                // push the next color to the queue
                q.push({next_x, next_y});
            }
        }
        return;
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        // iterate each row
        for(int row = 0; row < grid.size(); row++) {
            // iterate each column
            for(int col = 0; col < grid[0].size(); col++) {
                // if it is land
                if(grid[row][col] == '1'){
                    // perform flood fill and make each cell to 2 or any number except 0 and 1
                    // so that we won't visit it again
                    floodFill(grid, row, col, '2');
                    // after performing flood fill, we color one island 
                    ans++;
                }
            }
       }
       return ans; 
    }
};
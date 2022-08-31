class Solution {
public:
    typedef pair<int, int> pii; 
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& h) {
        // Storing the solution
        vector<vector<int>> ans;
        int n = h.size();
        int m = h[0].size();
        // Initializing the Pacific and Atlantic matrices;
        vector<vector<int>> pa(n, vector<int>(m, 0));
        vector<vector<int>> at(n, vector<int>(m, 0));
        
        // BFS for the pacific;
        queue<pii> q;
        for(int i{}; i<n; i++) q.push({i, 0});
        for(int j{}; j<m; j++) q.push({0, j});
        bfs(h, q, pa);
        
        // BFS for the atlantic;
        queue<pii> q2;
        for(int i{}; i<n; i++) q2.push({i, m-1});
        for(int j{}; j<m; j++) q2.push({n-1, j});
        bfs(h, q2, at);
        
        for(int i{}; i<n; i++){
            for(int j{}; j<m; j++){
                if(pa[i][j]==1 && at[i][j]==1) ans.push_back({i, j});
            }
        }
        
        return ans;
    }
private:
    void bfs(vector<vector<int>>& h, queue<pii>&q, vector<vector<int>>& vis){
        int n = h.size();
        int m = h[0].size();
        int dx[4] = {-1,0,1,0};
        int dy[4] = {0,1,0,-1};
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            vis[x][y] = 1;
            for(int i{}; i<4; i++){
                int cx = x + dx[i];
                int cy = y + dy[i];
                if(cx>=0 && cy>=0 && cx<n && cy<m){
                    if(h[cx][cy] >= h[x][y] && vis[cx][cy] == 0) q.push({cx, cy});
                }
            }
        }
    }
};
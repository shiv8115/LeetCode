class Solution {
public:
    #define pii pair<int, pair<int,int>>
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
int n,m;

bool isValid(int x, int y){
    return (x>=0 && y>=0 && x<n && y<m);
}

int minimumEffortPath(vector<vector<int>>& heights) {
   n=heights.size(), m=heights[0].size();
   priority_queue<pii, vector<pii>, greater<pii>> pq;   // {distance, {x, y}}
   pq.push({0,{0,0}});
   vector<vector<int>> dis(n,vector<int>(m,INT_MAX));   // min distance from (0,0)
   dis[0][0]=0;

    while(!pq.empty()){
        auto curr=pq.top();
        pq.pop();
        int d=curr.first, r=curr.second.first, c=curr.second.second;  // distance, row, column
        if(r==n-1 && c==m-1) return d;  // reached at the end
        for(int i=0;i<4;i++){
            int x=r+dx[i], y=c+dy[i];   // new row, column
            if(isValid(x,y)){       // valid path
                int diff=max(d, abs(heights[r][c]-heights[x][y]));    // max distance
                if(diff<dis[x][y]){    
                    dis[x][y]=diff;
                    pq.push({diff,{x,y}});
                }
            }
        }
    }
    return 0;
}
};
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double,int>, vector<pair<double,int>>, greater<pair<double,int>> > pq;
        for(int i=0;i<points.size();i++){
            int x= points[i][0];
            int y= points[i][1];
            double dis= sqrt(x*x + y*y);
            pq.push(make_pair(dis,i));
        }
        vector<vector<int>>ans;
        int cnt=0;
        while(cnt!=k){
            pair<double,int>p;
            p=pq.top();
            pq.pop();
            int idx= p.second;
            ans.push_back(points[idx]);
            cnt++;
        }
        return ans;
    }
};
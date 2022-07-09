class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        int n=nums.size();
        int dp[n];
        priority_queue<pair<int,int>>pq;
        for(int i=n-1;i>=0;i--){
            while(pq.size()>0 && pq.top().second > i+k) pq.pop();
            
            dp[i]=nums[i];
            
            dp[i]+=(pq.size()>0? pq.top().first: 0);
            
            pq.push(make_pair(dp[i],i));
        }
        return dp[0];
        
    }
};
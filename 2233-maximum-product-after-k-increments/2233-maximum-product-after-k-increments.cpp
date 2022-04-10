class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<nums.size();i++) pq.push(nums[i]);
        while(k--){
           int n= pq.top();
            pq.pop();
            n++;
            pq.push(n);
        }
        long long int ans=1;
        while(pq.size()!=0){
            ans= (ans* pq.top())%1000000007;
            pq.pop();
        }
        return (ans)%1000000007;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,curr=INT_MAX;
        for(int i=0;i<prices.size();i++){
            curr=min(curr,prices[i]);
            profit=max(profit,prices[i]-curr);
        }
        return profit;
        
    }
};
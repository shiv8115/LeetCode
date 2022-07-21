class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minm=1e9;
        int profit=0;
        int res=INT_MIN;
        for(int i=0;i<prices.size();i++){
            minm= min(minm, prices[i]);
            profit= prices[i]-minm;
            if(profit>res) res=profit;
        }
        return res;
    }
};
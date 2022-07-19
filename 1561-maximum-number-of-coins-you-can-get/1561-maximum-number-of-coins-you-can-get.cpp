class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int ans=0;
        int low=0,high=piles.size()-2;
        while(low<high){
            ans+= piles[high];
            high=high-2;
            low++;
        }
        return ans;
    }
};
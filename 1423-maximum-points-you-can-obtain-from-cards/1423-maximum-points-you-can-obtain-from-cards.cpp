class Solution {
public:
    int maxScore(vector<int>& card, int k) {
         int csum=0, res= INT_MIN;
         int sum= accumulate(card.begin(), card.end(),0);
         k= card.size()-k;
         for(int i=0;i<k;i++) csum+=card[i];
         res= max(res, sum-csum);
         for(int i=k;i<card.size();i++){
            csum+=(card[i]- card[i-k]);
            res= max(res, sum-csum);
        }
        return res;
    }
};
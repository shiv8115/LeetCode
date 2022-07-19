class Solution {
public:
    int minCostToMoveChips(vector<int>& pos) {
       int even=0, odd=0;
        for(int i=0;i<pos.size();i++){
            if(pos[i]%2==0) even++;
            else odd++;
        }
        return min(even,odd);
    }
};
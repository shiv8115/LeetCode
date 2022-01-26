class Solution {
public:
    int numRescueBoats(vector<int>& wt, int limit) {
        int n= wt.size(),boat=0;
        sort(wt.begin(), wt.end());
        int i=0, j=n-1;
        while(i<=j){
            int sum= wt[i]+wt[j];
            if(sum<=limit){
                boat++;
                i++;
                j--;
            }else if(sum>limit){
                boat++;
                j--;
            }
        }
        return boat;
    }
};
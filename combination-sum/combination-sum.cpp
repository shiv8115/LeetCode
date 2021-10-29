class Solution {
public:
    vector<vector<int>>res;
    void solve(vector<int>&cand, int i, int tsum,int target, vector<int>sum){
        if(tsum> target || (i==cand.size())) return ;
        if(tsum==target){
            res.push_back(sum);
            return;
        }
        tsum+=cand[i];
        sum.push_back(cand[i]);
        solve(cand,i,tsum,target,sum);
        tsum-=cand[i];
        sum.pop_back();
        solve(cand,i+1,tsum,target,sum);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>sum;
        solve(candidates,0,0,target,sum);
        return res;
        
    }
};
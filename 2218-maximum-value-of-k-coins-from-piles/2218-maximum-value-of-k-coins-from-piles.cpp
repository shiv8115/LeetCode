class Solution {
int help(int ind , int k, vector<vector<int>>&a, vector<vector<int>>&dp){
		//base cases
		if(k == 0)  return 0;
        if(k < 0)   return INT_MIN;
        if(ind < 0)    return 0;
		
		//memoization step
        int &ans = dp[ind][k];
        if(ans != -1)   return ans;     
		//you can either skip the current stack or take from it
		
        ans = help(ind-1, k , a, dp);  // option 1. skip the current stack
        int current_pile_size = a[ind].size();
		// this is the limit of elements you can take from the current stack
        int limit = min(k, current_pile_size-1);  
        
        for(int i=0;i<=limit;i++){ //this loop will give me how many items i can take from the stack
            int take = a[ind][i] ;   // since prefix sum is done we get the total elements uptil this index using a[ind][i]
            ans = max(ans, take + help(ind-1, k-i-1, a, dp));  // we take the max of all the available options
        }
        return ans;
    }
public:
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        int size = piles.size(); 
        for(auto &it: piles){
            int n = it.size();
            for(int i=1;i<n;i++){
                it[i] += it[i-1];
                cout<<it[i]<<" ";
            }// prefix sum ...so we can get cumulative sum upto a point
        }
        vector<vector<int>>dp(size+1, vector<int>(k+1, -1));
        return help(size-1, k, piles, dp);
    }
};
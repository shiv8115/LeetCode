// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
    int minCostClimbingStairs(vector<int>&arr ,int n) {
        //Write your code here
        vector<int>dp(n+1,0);
        dp[n-1]=arr[n-1];
        dp[n-2]=arr[n-2];
        for(int i=n-3; i>=0 ;i--){
            dp[i]= arr[i]+ min(dp[i+1],dp[i+2]);
        }
        return dp[0]<dp[1]? dp[0]:dp[1];
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>cost(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>cost[i];
        }

        Solution ob;
        cout<<ob.minCostClimbingStairs(cost,N);
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends
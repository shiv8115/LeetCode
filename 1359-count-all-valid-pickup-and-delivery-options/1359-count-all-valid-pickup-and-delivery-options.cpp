class Solution {
public:
    int countOrders(int n) {
        if(n<2)
            return n;
        int dp[n+1];
        int p=1000000007;
        dp[0]=0;
        dp[1]=1;
        dp[2]=6;
        for(int i=3;i<=n;i++)
            dp[i]= (long long)(dp[i-1]) * ((2*i-1)*i)%p;
        return dp[n];
    }
};
class Solution {
public:
    int distinctSubseqII(string s) {
       int n = s.length();
       long long dp[n+1];
       dp[0] = 1;
       unordered_map<char, int> mp;
       for(int i=1; i <= n; i++){
           dp[i] = (2 * dp[i-1]) %1000000007;
           char ch = s[i-1];     
           if(mp.find(ch)!=mp.end()){
               int j =  mp[ch];
               dp[i] = (dp[i] - dp[j-1] + 1000000007) % 1000000007;
           }
           mp[ch]=i%1000000007;
           
       }
       return (int)((dp[n] % 1000000007)-1);
    }
};
class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;
        int n = s.size();
        if(n == 1) return 1;
        bool dp[1001][1001] = {false};
        for(int i=0; i <n;++i ) {
            dp[i][i] = true;
            count++;
        }
        for(int i = n-1; i >=0; --i) {
            for(int j = i+1; j <n;++j) {
                if(s[i] == s[j]) {
                    if(j-i==1 || dp[i+1][j-1] == true) {
                        dp[i][j] = true;
                        count++;
                    }
                }
            }
        }
        return count;
        
    }
};
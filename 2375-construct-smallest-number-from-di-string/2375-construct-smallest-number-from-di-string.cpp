class Solution {
public:
    string smallestNumber(string pattern) {
        int n = pattern.size();
            string ans;
            for(int i = 1; i < n+2; i++){
                ans += i + '0';
            }
            int j = 1;
            for(int i = 0; i < n; i++){
                int k = i;
                while(k >= 0 && pattern[k] == 'D'){
                    swap(ans[k+1], ans[k]);
                    k--;
                }

            }
            return ans;
    }
};
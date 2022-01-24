class Solution {
public:
    int sum(int n){
        return n*(n+1)/2;
    }
    int reachNumber(int target) {
        int ans=0;
         target=abs(target);
        while(sum(ans)< target || (sum(ans)-target)%2!=0) ans++;
        return ans;
    }
};
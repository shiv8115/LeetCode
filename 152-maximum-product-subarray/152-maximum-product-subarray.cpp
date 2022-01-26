class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxp,minp,res;
        maxp=minp=res=nums[0];
        for(int i=1;i<n;i++){
            int x= nums[i];
            if(x<0) swap(maxp,minp);
            maxp=max(x, x*maxp);
            minp=min(x,x*minp);
            res=max(res,maxp);
        }
        return res;
        
    }
};
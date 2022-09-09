class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count0=0;
        int res=0;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) count0++;
            if(count0<=k) res= max(res, i-j+1);
            while(count0>k){
                if(nums[j++]==0) count0--;
            }
        }
        return res;
    }
};
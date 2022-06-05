class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(begin(nums),end(nums));
        int cnt=1, prev=0;
        for(int i=1;i<nums.size();i++){
            if(abs(nums[i]-nums[prev])>k){
                cnt++;
                prev=i;
            }
        }
        return cnt;
    }
};
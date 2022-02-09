class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx=-1;
        int n= nums.size();
        for(int i=n-1;i>0;i--){
            if(nums[i-1] < nums[i]){
                idx=i;
                break;
            }
        }
        if(idx == -1) sort(nums.begin(), nums.end());
        else{
            int prev= idx;
            for(int i= idx;i<n;i++){
                if(nums[i] > nums[idx-1] && nums[i]<=nums[prev])
                    prev=i;
            }
            swap(nums[idx-1], nums[prev]);
            sort(nums.begin()+idx, nums.end());
        }
        
    }
};
class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int n=nums.size();
        int si=0,ei=0,prevc=0,ans=0;
        while(ei<n){
            if(left<=nums[ei] && nums[ei]<=right){
                prevc=ei-si+1;
                ans+=prevc;   
            }else if(nums[ei]<left){
                ans+=prevc;     
            }else{
                si=ei+1;
                prevc=0;    
            }
            ei++;
        }
      return ans;     
    }
};
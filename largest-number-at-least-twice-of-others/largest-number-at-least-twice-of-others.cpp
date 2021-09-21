class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        bool flag=true;
        int maxE=0,ind;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxE){
                maxE=nums[i];
                ind=i;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxE/2 && i!=ind){
                flag=false;
                break;
            }
        }
        if(flag) return ind;
        return -1;
    }
};
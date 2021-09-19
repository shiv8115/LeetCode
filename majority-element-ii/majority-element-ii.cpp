class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int nums1=-1,nums2=-1,count1=0,count2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==nums1) count1++;
            else if(nums[i]==nums2) count2++;
            else if(count1==0){
                nums1=nums[i];
                count1=1;
            }
            else if(count2==0){
                nums2=nums[i];
                count2=1;
            }
            else{
                count1--;
                count2--;
            }
        }
        vector<int>ans;
        // if(n==2){
        //     if(nums[0]!=nums[1]){
        //         ans.push_back(nums[0]);
        //         ans.push_back(nums[1]);
        //         return ans;
        //     }else{
        //         ans.push_back(nums[0]);
        //         return ans;
        //     }
        // }
        count1=0;
        count2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==nums1) count1++;
            else if(nums[i]==nums2) count2++;
        }
        if(count1>n/3) ans.push_back(nums1);
        if(count2>n/3) ans.push_back(nums2);
        return ans;
        
    }
};
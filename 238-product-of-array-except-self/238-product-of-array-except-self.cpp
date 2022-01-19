class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int n=nums.size();
         vector<int>res(n);
         vector<int>right(n);
         int prod=1;
        for(int i=n-1;i>=0;i--){
            prod*=nums[i];
            right[i]=prod;
        }
        int left_prod=1;
        for(int i=0;i<n;i++){
            if(i<n-1){
                res[i]=left_prod*right[i+1];
            }else res[i]=left_prod;
            left_prod*=nums[i];
        }
        return res;
    }
};
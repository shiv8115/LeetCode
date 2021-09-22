class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>right(n); //contain right suffix
         vector<int>res(n);
        int prod=1;
        for(int i=n-1;i>=0;i--){
            prod*=nums[i];
            right[i]=prod;
        }
        int left_mul=1; // maintain left multiplication
        for(int i=0;i<n;i++){
            if(i<n-1){
                res[i]=left_mul*right[i+1];
            }else{
                res[i]=left_mul;
            }
            left_mul*=nums[i];
        }
        return res;
        
    }
};
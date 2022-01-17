class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
         
        int n=nums.size();
        vector<int>v(n);
        int i=0,j=n-1,idx=n-1;
        while(i<=j){
            int val1=nums[i]*nums[i];
            int val2=nums[j]*nums[j];
            if(val1>val2){
                v[idx]=val1;
                i++;
            }else{
                v[idx]=val2;
                j--;
            }
            idx--;
        }
        return v;
        
    }
};
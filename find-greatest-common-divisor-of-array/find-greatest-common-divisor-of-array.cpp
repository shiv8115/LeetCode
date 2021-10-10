class Solution {
public:
    int findGCD(vector<int>& nums) {
        int a= *min_element(nums.begin(),nums.end());
        int b= *max_element(nums.begin(),nums.end());
        for(int i=b;i>=1;i--){
            if(b%i==0 && a%i==0) return i;
        }
       return 1; 
    }
};
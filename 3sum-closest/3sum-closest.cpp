class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum=0,closest=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        sum=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n-2;i++){
           if(i==0 || (i>0 && nums[i]!=nums[i-1])){
               int low=i+1,high=n-1;
               while(low<high){
                   if(target==sum){
                      return sum;
                       // while(low< high && nums[low]==nums[low+1]) low++;
                       // while(low < high && nums[high]==nums[high-1]) high--;
                       // low++;
                       // high--;
                   }
                   closest=nums[i]+nums[low]+nums[high];
                   sum=abs(sum-target)<abs(closest-target)?sum:closest;
                   if(closest<target) low++;
                   else if(closest>target) high--;
               }
               
           } 
        }
        return sum;
        
        
    }
};
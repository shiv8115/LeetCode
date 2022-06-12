class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n= nums.size();
        if(n==1) return nums[0];
        unordered_map<int,int>mp;
        int i=-1, j=-1,sum=0,ans=INT_MIN;
        while(true){
            bool f1=false, f2=false;
            while(i<n-1){
                 //acquire
                f1=true;
                i++;
                mp[nums[i]]++;
                sum+=nums[i];
                if(mp[nums[i]]==2) break;
                else{
                    ans= max(ans,sum);
                }
                
            }
            while(j<i){
                 //release
                f2=true;
                j++;
                mp[nums[j]]--;
                sum-= nums[j];
                if(mp[nums[j]]==1) break;
            }
            if(f1==false && f2== false) break;
        }
        return ans;
    }
};
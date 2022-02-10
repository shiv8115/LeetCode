class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          vector<int>v;
          unordered_map<int,int>mp;
          mp[nums[0]]=0;
          for(int i=1;i<nums.size();i++){
              if(mp.find(target-nums[i]) != mp.end()){
                  v.push_back(mp[target-nums[i]]);
                  v.push_back(i);
                  return v;
              }
              mp[nums[i]]=i;
          }
        return v;
    }
};
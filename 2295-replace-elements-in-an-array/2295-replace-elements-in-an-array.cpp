class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& op) {
        unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++) mp[nums[i]]=i;
    for(auto i:op){
        nums[mp[i[0]]]= i[1];           //replace value to its index
        mp[i[1]]= mp[i[0]];       //update new value with its index
    }
    return nums;
    }
};
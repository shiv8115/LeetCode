class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        unordered_map<int,int> mp;
        vector<int> ans;   
    
        for(int i=0;i<n;i++){
     
         if(mp.find(target-numbers[i])!= mp.end()){
         ans.push_back(mp[target-numbers[i]]+1);
         ans.push_back(i+1);
         return ans;
     }
     
       mp[numbers[i]]=i;
     
 }

    return ans;  
    

        
    }
};
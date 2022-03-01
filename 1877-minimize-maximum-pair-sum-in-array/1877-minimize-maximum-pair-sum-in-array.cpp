class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n= nums.size();
        vector<pair<int,int>>v;
        sort(begin(nums),end(nums));
        int i=0, j=n-1;
        while(i<n/2){
            v.push_back(make_pair(nums[i],nums[j]));
            i++;
            j--;
        }
        vector<int>sum;
        for(int i=0;i<v.size();i++){
            sum.push_back(v[i].first+v[i].second);
        }
        return *max_element(begin(sum), end(sum));
        
    }
};
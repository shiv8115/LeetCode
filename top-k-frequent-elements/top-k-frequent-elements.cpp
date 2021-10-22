class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>res;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
        for(auto it=mp.begin();it!=mp.end();++it){
            pq.push(make_pair(it->second,it->first));
            if(pq.size()>k) pq.pop();
           
        }
        while(!pq.empty()){
            int temp=pq.top().second;
            pq.pop();
            res.push_back(temp);
        }
        return res;
        
    }
};
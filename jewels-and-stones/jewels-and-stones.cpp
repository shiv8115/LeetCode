class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans=0;
        unordered_map<char,int>mp;
        for(int i=0;i<stones.length();i++)
            mp[stones[i]]++;
        unordered_set<char>s(jewels.begin(),jewels.end());
        for(auto it=s.begin();it!=s.end();it++){
            char x= *it;
            if(mp.find(x)!=mp.end())
                ans+=mp[x];
        }
        return ans;
        
    }
};
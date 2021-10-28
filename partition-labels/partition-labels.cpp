class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>res;
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
            mp[s[i]]=i;
        int prev=-1, maxm=0;
        for(int i=0;i<s.size();i++){
            maxm= max(maxm,mp[s[i]]);
            if(i==maxm){
                res.push_back(maxm-prev);
                prev=maxm;
            }
        }
        return res;
        
    }
};
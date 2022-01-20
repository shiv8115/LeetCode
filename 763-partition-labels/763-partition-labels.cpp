class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>v;
        int n= s.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++) mp[s[i]]=i;
        int prev=-1,maxm=0;
        for(int i=0;i<n;i++){
            maxm=max(maxm,mp[s[i]]);
            if(i==maxm){
                v.push_back(maxm-prev);
                prev=maxm;
            }
        }
        return v;
        
    }
};
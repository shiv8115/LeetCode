class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int>v;
        int cnt=1;
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]) cnt++;
            else{
                v.push_back(cnt);
                cnt=1;
            }
        }
        v.push_back(cnt);
        for(auto &x: v) cout<<x<<" ";
        int ans=0;
        for(int i=0;i<v.size()-1;i++){
            ans+= min(v[i],v[i+1]);
        }
        return ans;
    }
};
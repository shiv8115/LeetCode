class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++)
            mp[s[i]]++;
        for(int i=0;i<t.length();i++){
            mp[t[i]]--;
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second != 0) return false;
        }
        return true;
    }
};
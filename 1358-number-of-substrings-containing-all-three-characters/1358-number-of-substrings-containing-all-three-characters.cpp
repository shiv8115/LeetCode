class Solution {
public:
    int numberOfSubstrings(string s) {
        int count =0;
        int i=0, j=0;
        unordered_map<char,int>mp;
        while(j<s.length()){
          mp[s[j]]++;
            while(mp['a'] && mp['b'] && mp['c']){
                count+=(s.length()-j);
                mp[s[i]]--;
                i++;
            }
            j++;
        }
        return count;
    }
};
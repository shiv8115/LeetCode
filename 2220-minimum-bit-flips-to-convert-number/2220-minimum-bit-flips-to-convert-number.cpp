class Solution {
public:
    int minBitFlips(int start, int goal) {
//         int count=0;
//        string s1= bitset<64>(start).to_string();
//        vector<char>v1;
//        for(int i=0;i<s1.length();i++) v1.push_back(s1[i]);
        
//        string s2= bitset<64>(goal).to_string();
//        vector<char>v2;
//        for(int i=0;i<s2.length();i++) v2.push_back(s2[i]);
        
//         for(int i=0;i<s1.length();i++){
//             if(s1[i]!=s2[i]) count++;
//         }
//         return count;
        return __builtin_popcount(start ^ goal);
    }
};
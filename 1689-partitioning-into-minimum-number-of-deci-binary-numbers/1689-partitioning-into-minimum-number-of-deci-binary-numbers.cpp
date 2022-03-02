class Solution {
public:
    int minPartitions(string s) {
        
        int res=0;
        for(int i=0;i<s.length();i++){
            res= max(res, s[i]-'0');
        }
        return res;
    }
};
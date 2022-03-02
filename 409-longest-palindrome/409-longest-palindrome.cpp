class Solution {
public:
    int longestPalindrome(string s) {
        int count=0;
        bool flag=true;
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(auto it= mp.begin(); it!=mp.end();it++){
            int num= it->second;
            if(num % 2==0) count+=num;
            else{
                if(flag) {
                    count++;
                    flag=false;
                }
                count+=(num-1);
            }
        }
        return count;
        
    }
};
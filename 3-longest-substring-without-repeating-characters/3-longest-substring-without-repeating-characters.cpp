class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int i=-1, j=-1,ans=0;
        unordered_map<char,int>mp;
         while(true){
             // aquire
        bool f1=false, f2= false;
             while(i<n-1){
                 f1= true;
                 i++;
                 mp[s[i]]++;
                 if(mp[s[i]]==2) break;
                 else
                 {
                     int len= i-j;
                     if(len>ans) ans= len;
                 }
             }
             
             // release
             while(j<i){
                 f2= true;
                 j++;
                 mp[s[j]]--;
                 if(mp[s[j]]==1) break;
             }
              if(f1==false && f2==false) break;
         }
        return ans;
    }
};
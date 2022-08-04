class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string str1= strs[0], str2= strs[strs.size() - 1];
        
        int cnt=0;
        int i=0, j=0;
        while(i< str1.length() && j<str2.length()){
            if(str1[i]==str2[j]){
                cnt++;
                i++;
                j++;
            }else break;
        }
        return strs[0].substr(0,cnt);
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> lastIndex;
        //initially last point to location before start of string.
        int answer=0,last=-1;
        for(int i=0;i<s.length();i++){
            auto it=lastIndex.find(s[i]);
            if(it!=lastIndex.end()){
                //update last index to lastindex of found element if lastindex of that element is more than last.
                last=max(last,it->second);
                //update lastindex to newly found index.
                lastIndex[s[i]]=i;
            }else{
                lastIndex.insert({s[i],i});
            }
            //update answer each time.
            answer=max(answer,i-last);
        }
        return answer;
    }
};
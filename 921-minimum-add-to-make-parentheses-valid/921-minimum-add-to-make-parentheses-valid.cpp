class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') st.push(s[i]);
            else{
                if(st.size()==0) cnt++;
                else st.pop();
                
            }
        }
        return st.size()+cnt;
    }
};
class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string res="";
        for(int i=0;i<s.length();i++){
            char ch= s[i];
            if(st.empty()){
                st.push('(');
                continue;
            }
            if(ch=='('){
                st.push('(');
                res+=ch;
            }
            else if(')'){
                st.pop();
                if(!st.empty()) res+=ch;
            }
        }
        return res;
    }
};
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            char ch= s[i];
            if(ch=='(' || ch=='{' || ch=='[')
                st.push(ch);
            else if(ch==')'){
                if(st.size()==0 || st.top()!='(')
                    return false;
                else st.pop();
            }
            else if(ch=='}'){
                if(st.size()==0 || st.top()!='{')
                    return false;
                else st.pop();
            }
            else if(ch==']'){
                if(st.size()==0 || st.top()!='[')
                    return false;
                else st.pop();
            }
        }
        if(st.size()==0) return true;
        return false;
    }
};
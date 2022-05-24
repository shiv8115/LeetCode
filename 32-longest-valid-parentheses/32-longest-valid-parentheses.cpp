class Solution {
public:
    int longestValidParentheses(string s) {
        int res=0;
        stack<int>st;
        st.push(-1); // Index Stack
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') st.push(i);
            else{
                st.pop(); // If we get closing bracket
                if(st.empty()) st.push(i); // If stack is empty
                else{
                    res= max(res, i-st.top()); // If not empty then update answer.
                }
            }
        }
        return res;
        
    }
};
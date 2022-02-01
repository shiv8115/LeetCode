class Solution {
public:
    bool isValid(string x) {
       stack<char>st;
        for(int i=0;i<x.size();i++){
            char ch=x[i];
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
            else{
                
            }
        }
        if(st.size()==0) return true;
        else
        return false;
        
    }
};
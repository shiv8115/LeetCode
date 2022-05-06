class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        int count=1;
        for(int i=0;i<s.length();i++){
            if(!st.empty() && st.top().first==s[i]){
                count=st.top().second+1;
            }else{
                count=1;
            }
            st.push(make_pair(s[i],count));
            if(st.top().second==k){
                for(int i=0;i<k;i++){
                    st.pop();
                }
            }
        }
        string s1;
        while(!st.empty()){
            s1.push_back(st.top().first);
            st.pop();
            
        }
        reverse(s1.begin(),s1.end());
        return s1;
    }
};
class Solution {
public:
    string removeDuplicates(string s, int k) {
        //sort(s.begin(),s.end());
        stack<pair<char,int>>st;
        // st.push(s[0]);
        int count=1;
        for(int i=0;i<s.length();i++){
            if(!st.empty() && st.top().first==s[i]){
                count= st.top().second +1;
                st.push(make_pair(s[i],count));
                if(st.top().second==k){
                    for(int j=0;j<k;j++)
                        st.pop();
                }
            }
            else{
                count=1;
                st.push(make_pair(s[i],count));
                
            }
        }
        string str="";
        while(!st.empty()){
            str+=st.top().first;
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};
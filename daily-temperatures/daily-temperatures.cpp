class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>v;
        stack<int>st;
        v.push_back(0);
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && temperatures[i]>= temperatures[st.top()])
                st.pop();
            if(st.size()>0){
                int diff= st.top()-i;
                v.push_back(diff);
                
            }else{
                v.push_back(0);
                
            }
            st.push(i);
        }
        reverse(v.begin(),v.end());
        return v;
        
    }
};
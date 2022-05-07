class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        vector<int>minm(n);
        minm[0]=nums[0];
        for(int i=1;i<n;i++) minm[i]=min(minm[i-1],nums[i]);
      //  int bool found=false;
        stack<int>st;
        for(int j=n-1;j>=0;j--){
            while(st.size()>0 && st.top()<=minm[j]) st.pop();
            if(st.size()>0 && st.top()<nums[j]){
              //  found=true;
                return true;
            }
            st.push(nums[j]);
        }
        return false;
    }
};
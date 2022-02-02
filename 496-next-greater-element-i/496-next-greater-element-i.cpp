class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int>mp;
        stack<int>st;
        vector<int>v;
        for(int i=0;i<nums2.size();i++){
            while(st.size() && nums2[i] >st.top()){
                mp[st.top()]=nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            int temp= mp.count(nums1[i])? mp[nums1[i]]:-1;
            v.push_back(temp);
        }
        return v;
        
    }
};
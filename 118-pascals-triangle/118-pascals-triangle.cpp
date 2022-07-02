class Solution {
public:
    vector<vector<int>> generate(int num) {
        vector<vector<int>>ans;
        for(int i=0;i<num;i++){
            vector<int>v;
            int val=1;
            for(int j=0;j<=i;j++){
                v.push_back(val);
                val=val*(i-j)/(j+1);
            }
            ans.push_back(v);
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
      //  unordered_map<pair<int,int>mp;
        vector<int> ans;
         vector<pair<int,int>> v;
        for(int i=0;i<mat.size();i++){
            int cnt=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1) cnt++;
            }
            v.push_back(make_pair(cnt,i));
        }
        sort(v.begin(), v.end());
        for(int i=0;i<k;i++){
            int temp= v[i].second;
            ans.push_back(temp);
        }
        return ans;
    }
};
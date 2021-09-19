class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size(),m=mat[0].size();
         if(m*n!=r*c)
          return mat;
          vector<vector<int>> ans(r, vector<int>(c, 0));
         for(int i=0;i<n;i++)
         {
             for(int j=0;j<m;j++)
             {
                int k=m*i+j;
                 ans[k/c][k%c]=mat[i][j];
             }
         }
         return ans;
        
    }
};
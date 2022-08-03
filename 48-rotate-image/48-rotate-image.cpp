class Solution {
public:
    void reverse(vector<vector<int>>&mat){
        for(int i=0;i<mat.size();i++){
            int low=0, high=mat.size()-1;
            while(low<high){
                swap(mat[i][low], mat[i][high]);
                low++;
                high--;
            }
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        int n= matrix.size(), m= matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++)
                swap(matrix[i][j], matrix[j][i]);
        }
        reverse(matrix);
    }
};
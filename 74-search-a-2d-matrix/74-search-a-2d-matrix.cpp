class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row= matrix.size();
        int col= matrix[0].size();
        int i=0, j= col-1;
        while(i< row && j>=0){
            int curr= matrix[i][j];
            if(curr==target) return true;
            else if(curr < target) i++;
            else j--;
        }
        return false;
    }
};
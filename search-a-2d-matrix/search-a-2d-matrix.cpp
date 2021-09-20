class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row= matrix.size();
        int col=matrix[0].size();
        //int element=matrix[row-1][col-1];
        int i=0,j=col-1;
       // int element=matrix[i][j];
        while(i<row && j>=0){
            int element=matrix[i][j];
            if(element<target)
                i++;
            else if(element>target)
                j--;
            else
                return true;
        }
        return false;
        
    }
};
class Solution {
public:
    void transpose(vector<vector<int>>&v){
        int n=v.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                int temp=v[i][j];
                v[i][j]=v[j][i];
                v[j][i]=temp;
            }
        }
    }
    void reverse(vector<vector<int>>&v){
        int n=v.size();
        for(int i=0;i<n;i++){
            int left=0,right=n-1;
            while(left<=right){
                int temp= v[i][left];
                v[i][left]=v[i][right];
                v[i][right]=temp;
                left++;
                right--;
            }
        }
        
    }
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        reverse(matrix);
        
    }
};
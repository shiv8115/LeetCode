class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<string,int>mp;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    string str="Row";
                    str+=to_string(i);
                    str+=board[i][j];
                    
                    string str1="Col";
                    str1+=to_string(j);
                    str1+=board[i][j];
                    
                    int box= (i/3)*3+j/3;
                    string str2= to_string(box);
                    str2+=board[i][j];
                    
                    if(mp.find(str)!=mp.end() || mp.find(str1)!=mp.end()|| mp.find(str2)!=mp.end())
                        return false;
                    else
                    {
                        mp[str]=1;
                        mp[str1]=1;
                        mp[str2]=1;
                    }
                    
                }
            }
        }
        return true;
        
    }
};
class Solution {
public:
    string reverseWords(string s) {
        int i,j, size;
        string result;
       istringstream ss(s);
        while(ss)
        { 
            string word;
            ss>>word;
            if(word.size() > 0)
            {
                result.insert(0, word);
                result.insert(0, " ");
            }
        }
        result.erase(0,1); 
       return result; 
        
    }
};
class Solution {
public:
   unordered_map<char,string> mapping = 
       { {'2', "abc"}, 
        {'3',"def" }, 
        {'4', "ghi" }  ,
        {'5', "jkl"}, 
        {'6', "mno" } ,
        {'7', "pqrs"}, 
        {'8', "tuv"} , 
        {'9', "wxyz" }};
    void letterCombinationsRec(string input, string output, vector<string> &comb, int i)
    {
        //base case
        if(i== input.size())
        {
            comb.push_back(output);
            return;
        }
        char digit = input[i];
        string mapped = mapping[digit];
        for(int k=0;k<mapped.size();k++)
        {
            char letter = mapped[k];
            letterCombinationsRec(input, output+letter, comb, i+1);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> comb;
        if(digits.size()==0)
        {
            return comb;
        }
      
        letterCombinationsRec(digits,"", comb, 0 );
        return comb;
        
    }
};
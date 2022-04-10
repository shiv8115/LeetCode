class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> scores;
        for (auto& op: ops) {
            if (op=="C") {
                scores.pop_back();
            } else if (op=="D") {
                scores.push_back(2*scores.back());
            } else if (op=="+") {
                int a = scores.back();
                int b = *(&scores.back()-1);
                scores.push_back(a+b);
            } else {
                scores.push_back(stoi(op));
            } 
        }
        
        return accumulate(scores.begin(), scores.end(), 0);
    }
};
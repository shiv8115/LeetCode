class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        int tax= min(brackets[0][0], income);
        double ans= tax*brackets[0][1]/100.00;
        income= income-tax;
        for(int i=1;i<brackets.size() && income>0;i++){
            int diff= brackets[i][0]-brackets[i-1][0];
            int taxe= min(diff, income);
            ans+= taxe*brackets[i][1]/100.00;
            income= income-taxe;
        }
        return ans;
    }
};
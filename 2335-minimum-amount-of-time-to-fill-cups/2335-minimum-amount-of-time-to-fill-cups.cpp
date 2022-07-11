class Solution {
public:
    int fillCups(vector<int>& am){
        sort(am.begin(), am.end());
        if(am[0]+am[1]<= am[2]) return am[2];
        else return (am[0]+am[1]-(am[0]+am[1]- am[2])/2);
    }
};
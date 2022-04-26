class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
        int cnt = 0;
        for (int x = 0; x <= 200; x++)
        for (int y = 0; y <= 200; y++)
            for (auto &c : circles)
                if ((c[0] - x) * (c[0] - x) + (c[1] - y) * (c[1] - y) <= c[2]*c[2]){
                    cnt++; break;
                }
        return cnt;

    }
};
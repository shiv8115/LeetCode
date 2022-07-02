class Solution {
public:
    int MOD = 1e9 + 7;
    int maxArea(int he, int we, vector<int>&h, vector<int>&w) {
        sort(begin(h), end(h));
        sort(begin(w), end(w));
        long long int maxh= max(h[0]-0, he- h[h.size()-1]);
        for(int i=1;i<h.size();i++){
            long long int height= h[i]-h[i-1];
            maxh= max(maxh, height);
        }
        long long int maxw= max(w[0]-0, we-w[w.size()-1]);
        for(int i=1;i<w.size();i++){
            long long int width= w[i]-w[i-1];
            maxw= max(maxw, width);
        }
        return (maxh%MOD*maxw%MOD)%1000000007;
    }
};
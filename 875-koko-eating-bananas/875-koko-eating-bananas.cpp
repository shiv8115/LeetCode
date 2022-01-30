class Solution {
public:
    bool ok(int mid, vector<int>&piles, int h){
        int total=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            int x= piles[i]/mid;
            int y= piles[i]%mid;
            if(y) x++;
            total+=x;
        }
        return total<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=(int)(1e9+1);
        while(l<r){
            int mid= l+(r-l)/2;
            if(ok(mid,piles,h)) r=mid;
            else l=mid+1;
        }
        return l;
    }
};
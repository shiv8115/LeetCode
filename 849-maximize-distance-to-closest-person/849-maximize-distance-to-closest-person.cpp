class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n=seats.size(),l=-1,maxdis=0;
        for(int i=0;i<n;i++){
            if(seats[i]==1){
                if(l==-1) maxdis=i;
                else maxdis=max(maxdis,(i-l)/2);
                l=i;
            }
        }
        if(seats[n-1]==0) maxdis=max(maxdis,n-1-l);
        return maxdis;
        
    }
};
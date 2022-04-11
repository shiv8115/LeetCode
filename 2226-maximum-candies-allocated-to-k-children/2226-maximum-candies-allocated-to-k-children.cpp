class Solution {
public:
     long long int solve(vector<int>& candies, long long mid){
         long long int count=0;
         for(auto &candy: candies){
             count+=(candy/mid);
         }
         return count;
     }
    int maximumCandies(vector<int>& candies, long long k) {
        if(solve(candies,1)<k) return 0;
        long long int l=1, r=1e7+1;
        while(l<r){
            long long int mid= (l+r+1)/2;
            if(solve(candies,mid)<k) r=mid-1;
            else l=mid;
        }
        return l;
    }
};
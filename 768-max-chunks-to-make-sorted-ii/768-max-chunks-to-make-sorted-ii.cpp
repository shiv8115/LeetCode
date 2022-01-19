class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        vector<int>v;
        v=arr;
        sort(v.begin(),v.end());
        long long int count=0,sum1=0,sum2=0;
        for(int i=0;i<arr.size();i++){
            sum1+=arr[i];
            sum2+=v[i];
            if(sum1==sum2) count++;
        }
        return count;
    }
};
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int maxe=INT_MIN,count=0;
        for(int i=0;i<arr.size();i++){
            maxe=max(maxe,arr[i]);
            if(i==maxe) count++;
        }
        return count;
    }
};
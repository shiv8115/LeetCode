class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int max_impact=0;
        int count=0;
        for(int i=0;i<arr.size();i++){
            max_impact=max(arr[i],max_impact);
            if(i==max_impact)
                count++;
        }
        return count;
        
        
    }
};
class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n= intervals.size();
        sort(begin(intervals),end(intervals));
        int count=n;
        int temp=0;
        for(int i=1;i<n;i++){
            if(intervals[i][0] >= intervals[temp][0] && intervals[i][1]<=intervals[temp][1]) count--;
           if(intervals[temp][0] >= intervals[i][0] && intervals[temp][1] <= intervals[i][1])  count--; 
            if(intervals[i][1] > intervals[temp][1]) temp=i;
        }
      return count;  
    }
};
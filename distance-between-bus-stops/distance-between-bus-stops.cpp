class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        
        
        int total=0;
        for(int i=0;i<distance.size();i++)
        {
            total+=distance[i];
        }
        int dis=0;
        int s=min(start,destination);
        while(s<max(start,destination))
        {
            dis+=distance[s];
            s++;
        }
        return min(dis,(total-dis));

        
    }
};
class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        
        sort(tasks.begin(),tasks.end());
        int count=1;
        int round=0;
        for(int i=0;i<tasks.size();i++){
            count=1;
            while(i+1<tasks.size() && tasks[i]==tasks[i+1]){
                count++;
                i++;
            }
            
            if(count<2)
                return -1;
            
           if(count>3){
               round+=count/3;
               count=count%3;
           }
            if(count>0){
                round++;
            }
            
        }
        return round;
    }
        
};
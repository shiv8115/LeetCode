class Solution {
public:
    int minTimeToType(string word) {
        int count=0;    
        int p=(97-96);
        int n= word.length();
        for(int i=0;i<n;i++){
            char x= word[i];
            int target= int(x)-96;
            if(target==p) count++;
            else{
                int step= min(abs(p-target),26-(abs(p-target)));
                count+=step;
                count++;
                p=target;
            }
            
        }
        return count;
        
    }
};
class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int count=0;
        for(int i=2;i<sqrt(2*n);i++){
            if((n-((i*(i-1))/2))%i==0) count++;
        }
        return count+1;
        
    }
};
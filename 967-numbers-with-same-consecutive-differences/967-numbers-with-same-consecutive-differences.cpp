class Solution {
public:
    vector<int>v;
    int countf(int num){
        int count=0;
        while(num>0){
            count++;
            num= num/10;
        }
        return count;
    }
    void findfun(int num, int n, int k){
        if(countf(num)==n){
            v.push_back(num);
            return;
        }
        for(int i=0;i<=9;i++){
            int ld= num%10;
            if(abs(ld-i)==k){
                int number= (num*10)+i;
                findfun(number,n,k);
            }
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        for(int i=1;i<=9;i++){
            findfun(i,n,k);
        }
        return v;
    }
};
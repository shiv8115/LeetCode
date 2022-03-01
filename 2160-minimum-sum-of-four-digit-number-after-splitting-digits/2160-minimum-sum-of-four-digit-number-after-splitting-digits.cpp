class Solution {
public:
    int minimumSum(int num) {
        vector<int>v;
        while(num!=0){
            v.push_back(num%10);
            num=num/10;
        }
        sort(v.begin(),v.end());
        int new1=0,new2=0;
        new1= new1*10+v[0];
        new1= new1*10+v[2];
        
        new2= new2*10+v[1];
        new2= new2*10+v[3];
        return new1+new2;
    }
};
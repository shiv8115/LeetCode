class Solution {
public:
    vector<int> getRow(int idx) {
             vector<int>v;
             long long int val=1;
             for(int j=0;j<=idx;j++){
                 v.push_back(val);
                 val=val*(idx-j)/(j+1);
             }
        cout<<val;
          
         
        return v;
        
    }
};
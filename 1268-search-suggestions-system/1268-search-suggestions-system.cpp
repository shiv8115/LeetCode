class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string txt) {
        vector<vector<string>>ans;
        sort(products.begin(), products.end());
        for(int j=0;j<txt.size();j++){    
            vector<string>vs;
            vs.clear();
            int count=0;
            string word= txt.substr(0,j+1);
          //  cout<<word<<" ";
           for(int i=0;i<products.size();i++){
            size_t found = products[i].find(word);
            //   cout<<word<<" "<<found<<" "<<products[i]<<" ";
        	if (found==0 && found<txt.size() ){
                   if(count<3){
                        vs.push_back(products[i]);
                        count++;
                   }
                 
            } 
        }
            ans.push_back(vs);
            vs.clear();
        }
        //sort(begin(ans), end(ans));
        return ans;
    }
};
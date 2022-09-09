class Solution {
public:
//     int fun(string s,int k,int index)
//     {  int i=0;
//           int j=0;
//          int count=0;
//         int result=0;
//         char ch=index+'A';
        
//         // Variable window size problem
//         while(j<s.size())
//         {
//             // Pre-Calculation
//             if(s[j]!=ch)
//             {s[j]='x';count++;}
            
//             // Play With Condition
//             while(count>k)
//                 {
//                     // remove calculation for i
//                     if(s[i]=='x')
//                     count--;
//                     i++;
//                 }
            
                   
                
            
//              // store result
//                     result=max(result,j-i+1);
//             // cout<<result<<endl;
//             j++;
            
//         }
//      return result;
//     }
    int fun(string s, int k,int idx){
        int i=0;// It is privious pointer
        int j=0; // It is used to traverse the string from each individual character
        char ch = idx+'A';
        int count=0;
        int res=0; // It store the result for individual character
        // Variable window size problem
        while(j<s.length()){
            // Computer logic or condition or pre-calculation
            if(s[j]!=ch){
                count++;
                s[j]='x';
            }
            while(count>k){
                // Remove calculation for i
                if(s[i]=='x') count--;
                i++;
            }
            // Store Result
             res= max(res, j-i+1);
            j++;
        }
        return res;
    }
    int characterReplacement(string s, int k) {
        int res=0;
        for(int i=0;i<26;i++){
            res= max(res, fun(s,k,i));
        }
        return res;
    }
};
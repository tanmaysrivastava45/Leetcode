class Solution {
public:
    string removeDuplicates(string s) {
         int i=1;
       while(i<s.length()) 
       {
           if(s[i-1]==s[i])
           {
               s.erase(i-1,2);
               if(i>1)  /// to recheck whether there is any duplicate character
               {
                   i--;
               }
           }
           else{
               i++;
           }
      
       }
        
        return s;
            
    }
};
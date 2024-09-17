class Solution {
public:
    
    bool check_equal(int a[26],int b[26])
    {
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i])
            {
                return 0;
            }
               
            
        }
         return 1;
    };
    
    bool checkInclusion(string s1, string s2) {
     int array1[26]={0};
        for(int i=0;i<s1.length();i++)
        {
            int index=s1[i]-'a';
            array1[index]++;
        }
        int array2[26]={0};
        int i=0;
        int window_size=s1.length();
        // for first window 
        while(i<window_size && i<s2.length())
        {
            int index=s2[i]-'a';
            array2[index]++;
            i++;
        }
        if (check_equal(array1,array2))
        {
            return true;
        };
        // i need to operate for other elements in string 
        while(i<s2.length())
        {
            char newch=s2[i];
            int index=newch-'a';
            array2[index]++;
            
            char oldchar=s2[i-window_size];
            index=oldchar-'a';
            array2[index]--;
            i++;
            if(check_equal(array1,array2))
            {
                return true;
            }
            
        }
        return false;
        
    }
};
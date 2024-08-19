// easy solution using built in function 

// class Solution {
// public:
//     bool isPalindrome(string s) {
//         int b=0;
//         int e=s.size()-1;
//         while(b<e)
//         {
//             while(b<e && !isalnum(s[b]))
//             {
//                 b++;
//             }
//             while(b<e && !isalnum(s[e]))
//             {
//                 e--;
//             }
//             if(tolower(s[b])!=tolower(s[e]))
//                 return false;
//             b++;
//             e--;
//         }
//         return true;
//     }
// };

class Solution {
public:
    
    bool valid(char ch)
    {
        if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z')||(ch>='0' && ch<='9'))
        {return 1;}
        return 0;
    }
    
    
    char tolowercase(char ch)
    {
        if((ch>='a'&& ch<='z')||(ch>='0' && ch<='9'))
        {
            return ch;
        }
        else
        {
            char temp= ch-'A'+'a';
            return temp;
        }
    }
    
    bool checkpalindrome(string a)
    {
        int s=0;
        int e=a.size()-1;
        while(s<e)
        {
        if(a[s]!=a[e])
        {
            return 0;
        }
        s++;
        e--;
        }
        return 1;
    }
    
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.size();i++)
        {
            if(valid(s[i]))
            {
                temp.push_back(s[i]);
            }
        }
        for(int i=0;i<temp.size();i++)
        {
            temp[i]=tolowercase(temp[i]);
        }
        return checkpalindrome(temp);
    }
};






















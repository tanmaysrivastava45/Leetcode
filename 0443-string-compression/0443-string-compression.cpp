class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int index=0;
        int i=0;
        while(i<n)
        {
            int j=i+1;
            while(j<n && chars[i]==chars[j])
            {
                j++;
            }
            chars[index++]=chars[i];
            int c=j-i;
            if(c>1)
            {
                string cnt=to_string(c);
                for(char ch:cnt)
                {
                    chars[index++]=ch;
                }
            }
            i=j;
        }
        return index;
    }
};
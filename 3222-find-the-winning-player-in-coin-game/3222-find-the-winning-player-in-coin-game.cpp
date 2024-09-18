class Solution {
public:
    string losingPlayer(int x, int y) {
        int count=0;
        string ans;
        while(x>0 && y>=4)
        {
            x--;
            y=y-4;
            count++;
        }
        if(count%2!=0)
        {
            ans="Alice";
        }
        else{
          ans="Bob";
        }
        return ans;
    }
};
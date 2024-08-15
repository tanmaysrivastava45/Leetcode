class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        // we will be solving this question with the help of slope of a line 
        int n=coordinates.size();
        int x1=coordinates[0][0],y1=coordinates[0][1];
        int x2=coordinates[1][0],y2=coordinates[1][1];
        int dx=x2-x1;//calculating slope of the line 
        int dy=y2-y1;
        for(int i=2;i<n;i++)
        {
            // a loop to check whether it is valid for all points 
            int x=coordinates[i][0];
            int y=coordinates[i][1];
            
            if(dx*(y-y1)!=dy*(x-x1))
            {
                return false;
            }
        }
        return true;
    }
};

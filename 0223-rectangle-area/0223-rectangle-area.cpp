class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int x1=abs(ax1-ax2);
        int x2=abs(bx2-bx1);
        int y1=abs(ay1-ay2);
        int y2=abs(by1-by2);
        int x=min(ax2,bx2);
        int y=min(ay2,by2);
        int a=max(ax1,bx1);
        int b=max(ay1,by1);
        int overlap=0;
        if(a<x && b<y)
        {
            overlap=(a-x)*(b-y);
        }
        int area=abs(x1*y1)+abs(x2*y2)-overlap;
        return area;
    }
};
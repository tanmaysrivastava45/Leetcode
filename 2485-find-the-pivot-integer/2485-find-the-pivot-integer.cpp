class Solution {
public:
    int pivotInteger(int n) {
        int leftsum=0;
        int totalsum=n*(n+1)/2;
        
        for(int x=1;x<=n;x++)
        {
            leftsum=leftsum+x;
            int rightsum=totalsum-leftsum+x;
             if(rightsum==leftsum)
        {
            return x;
        }
        }
       
        return -1;
    }
};
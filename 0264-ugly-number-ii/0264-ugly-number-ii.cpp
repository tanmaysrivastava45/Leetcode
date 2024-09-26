class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>arr(n+1);
        arr[1]=1;
        int x=1;
        int y=1;
        int z=1;
        for(int i=2;i<=n;i++){
            int i1= arr[x]*2;
            int i2= arr[y]*3;
            int i3= arr[z]*5;
            int num = min({i1,i2,i3});
            arr[i]=num;
            if(num==i1)
            { 
                x++;
            }
            if(num==i2)  
            {
                y++;
            }
            if(num==i3)
            {
                z++;
            }
        }
        return arr[n];
    }
};
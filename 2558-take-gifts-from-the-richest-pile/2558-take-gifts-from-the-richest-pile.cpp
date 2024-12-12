class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        while(k--)
        {
        sort(gifts.begin(), gifts.end(), greater<int>());
            gifts[0]=sqrt(gifts[0]);
            
        }
        long long int sum=0;
        for(int i=0;i<gifts.size();i++)
        {
            sum=sum+gifts[i];
        }
        return sum;
    }
};
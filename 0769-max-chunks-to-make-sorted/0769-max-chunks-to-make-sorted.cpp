class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
        int count=0;
        int sumi=0;
        int arrs=0;
        for(int i=0;i<n;i++)
        {
            sumi +=i;
            arrs += arr[i];
            if(sumi==arrs)
            {
                count++;
            }
            
        }
        return count;
    }
};
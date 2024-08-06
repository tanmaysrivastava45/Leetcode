class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0;
        int n=arr.size();
        int end=n-1;
        int mid= start+ (end-start)/2;
        while(start<=end)
        {
            if(arr[mid]<arr[mid+1])
            {
                start=mid+1;
            }
            else if(arr[mid-1]>arr[mid])
            {
                end=mid-1;
            }
            else{ return mid; }
            mid=start+(end-start)/2;
        }
        return mid;
    }
};
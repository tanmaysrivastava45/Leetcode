class Solution {
public:
     int maximumBeauty(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int start = 0, ans = 0;
        for(int i=0; i<nums.size(); i++){
            while(nums[i]-nums[start] > 2*k)
                start++;
            ans = max(ans,i-start+1);
        }
        return ans;
    // one of the greatest question in terms of logic
    /*Question says that we can "Replace nums[i] with any integer from the range [nums[i] - k, nums[i] + k]".

This means we can replace the element of the array with any value within the shown range below.

                [ 4   6   1   2 ]
min of range =    2   4  -1   0     i.e. nums[i] - k 
max of range =    6   8   3   4     i.e. nums[i] + k 

Now, to be a "Beautiful Subsequence" all elements of the subsequence should be equal.

All elements can be equal if the "max of range of minimum element is greater than equal to min of range of maxium element".
Didn't get it \U0001f92f no problem lets visulaize:- 

for the above example ~
Minimum Element = 1 and max of range of 1 = 3
Maixium Element = 6 and min of range of 6 = 4

this means if we replace 1 with max of it's range i.e. 3 and we replace 6 with min of it's range i.e. 4,
still we can't make 1 and 6 equal.

So what can we do is either increment minimum i.e. ignore 1 or decrement maximum i.e. ignore 6 both will work. I'll ignore the minimum i.e. 1.

I think now this condition "max of range of minimum element is greater than equal to min of range of maxium element" makes sense \U0001f609.

Okay, now the next minimum is 2 as we have igonred 1. Lets check the condition.

for the above example ~
Minimum Element = 2 and max of range of 2 = 4
Maixium Element = 6 and min of range of 6 = 4

this means if we replace 2 with max of it's range i.e. 4 and we replace 6 with min of it's range i.e. 4,
we can make 2 and 6 equal.

So the number of elements in the "Beautiful Subsequence" is 3 as we have ignored element '1'.*/
    
   
    }
};
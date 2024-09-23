class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        long long int maxArea = 0;

        while (left < right) {
           
            long long int area = (long long int)(min(height[left], height[right])) * (right - left);
            
          
            maxArea = max(maxArea, area);
            
          
            if (height[left] < height[right])
            {
                left++;
            }
            else {
                right--;
            }
        }
        
        return maxArea;
    }
};

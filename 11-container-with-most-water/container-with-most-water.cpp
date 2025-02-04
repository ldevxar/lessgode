class Solution
{
    public:
        int maxArea(vector<int> &height)
        {
            int lowIndex = 0;
            int endIndex = height.size() - 1;
            int maxArea = 0;
            while(lowIndex < endIndex){
                int area = (endIndex-lowIndex) * std::min (height[lowIndex],height[endIndex]);
                maxArea = std::max(maxArea,area);

                if(height[lowIndex] < height[endIndex]){
                    lowIndex++;
                }
                else{
                    endIndex--;
                }
            }
            return maxArea;
        }
};
class Solution {
public:
    int maxArea(vector<int>& heights) {
        int size = heights.size();
        int i = 0, j = size-1;
        int maxWater = 0;

        // maxWater stored = max(maxStored, area())
        int tempWater = 0;
        while(i<j){
            tempWater = (j-i)*min(heights[i],heights[j]);
            maxWater = max(tempWater,maxWater);
            if (heights[i] < heights[j])
                i++;
            else
                j--;
        }

        return maxWater;
    }
};

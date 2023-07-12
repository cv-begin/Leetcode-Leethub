class Solution {
public:
    int maxArea(vector<int>& height) {

        int res = 0;
        int l = 0;
        int r = height.size() - 1;
        int area = 0;

        while (l < r)
        {
            area = (r-l) * min(height[l], height[r]);
            res = max(area, res);
            
            if (height[l] < height[r])
                l++;
            else if(height[l] > height[r])
                r--;
            else
                l++;
        }

        return res;
        
    }
};
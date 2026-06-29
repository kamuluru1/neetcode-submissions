class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max = 0;

        int l = 0;
        int r = heights.size() - 1;

        while (l < r) {
            int vol = (r - l) * min(heights[l], heights[r]);
            if (vol > max) max = vol;

            if (heights[r] < heights[l]) r--;
            else l++;
        }

        return max;

    }
};

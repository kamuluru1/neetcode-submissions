class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> max_left = vector<int>(height.size());
        vector<int> max_right = vector<int>(height.size());
        int water = 0;

        max_left[0] = height[0];
        for(int i = 1; i < max_left.size(); i++) {
            max_left[i] = std::max(height[i], max_left[i - 1]);
        }

        max_right[height.size() - 1] = height[height.size() - 1];
        for (int i = max_right.size() - 2; i >= 0; i--) {
            max_right[i] = std::max(height[i], max_right[i + 1]);
        } 

        for (int i = 0; i < height.size(); i++) {
            water += std::min(max_left[i], max_right[i]) - height[i];
        }

        return water;
    }
};

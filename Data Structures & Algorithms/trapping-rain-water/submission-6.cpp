class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) return 0;

        int water = 0;

        vector<int> left_max = vector<int>(height.size());
        vector<int> right_max = vector<int>(height.size());

        left_max[0] = height[0];
        right_max[height.size() - 1] = height[height.size() - 1];

        for (int i = 1; i < height.size(); i++) {
            left_max[i] = std::max(height[i], left_max[i - 1]);
        }
        for (int i = height.size() - 2; i >= 0; i--) {
            right_max[i] = max(height[i], right_max[i + 1]);
        }

        for (int i = 0; i < height.size(); i++) {
            water += min(left_max[i], right_max[i]) - height[i];
        }

        return water;
    }
};

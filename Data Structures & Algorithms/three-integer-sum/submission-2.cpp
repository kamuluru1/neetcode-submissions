class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end()); 
        vector<vector<int>> sol_;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int target =  0 - nums[i];
            int l = i + 1;
            int r = nums.size() - 1;

            while (l < r) {
                if (nums[l] + nums[r] == target) {
                    sol_.push_back({nums[l], nums[r], nums[i]});
                    l++;
                    r--;

                    while (l < r && nums[l] == nums[l - 1]) l++;
                    while (l < r && nums[r] == nums[r + 1]) r--;
                }
                else if (nums[l] + nums[r] < target) l++;
                else r--;
            }
        }

        return sol_;
    }
};

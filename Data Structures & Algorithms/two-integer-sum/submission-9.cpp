class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> complements;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (complements.contains(complement)) {
                return {complements[complement], i};
            }
            complements[nums[i]] = i;
        }
    }
};

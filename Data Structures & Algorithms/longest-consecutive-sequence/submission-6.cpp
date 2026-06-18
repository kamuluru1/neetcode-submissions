class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> s(nums.begin(), nums.end());
        std::unordered_set<int> starts;
        int sol = 0;

        for (const auto& num : s) {
            if (!s.contains(num - 1)) {
                starts.insert(num);
            }
        }

        for (const auto& num : starts) {
            int curr = num;
            int length = 1;
            while (true) {
                if (s.contains(curr + 1)) {
                    length++;
                    curr++;
                }
                else {
                    if (length > sol) sol = length;
                    break;
                }
            }
        }

        return sol;




    }
};

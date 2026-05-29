class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) { // nums = {1, 2, 2, 3, 3, 3}
        unordered_map<int, int> freq_map;

        for (auto i : nums) {
            freq_map[i]++;
        }

        // {1, 1}, {2, 2}, {3, 3}

        vector<vector<int>> freq(nums.size() + 1); // {{}, {1}, {2}, {3}, {}, {}, {}}

        for (auto& [num, count] : freq_map) {
            freq[count].push_back(num);
        }

        vector<int> sol; // {3, 2}
        int val = k; // 0

        for (int i = freq.size() - 1; i >= 0; i--) {
                if (freq[i].empty()) { continue ;}
                else {
                    for (auto num : freq[i]) {
                        if (val == 0) break;
                        sol.push_back(num);
                        val--;
                    }
                }
        }

        return sol;
        
    }
};

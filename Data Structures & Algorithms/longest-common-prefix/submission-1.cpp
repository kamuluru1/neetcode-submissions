class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) { return ""; }

        string shortest_str = strs[0];
        size_t size = strs.size();

        for (auto str : strs) {
                if (str.length() < shortest_str.length()) {
                        shortest_str = str;
                }
        }

        vector<int> freq(shortest_str.size());

        for (auto str : strs) {
                for (int i = 0; i < shortest_str.size(); i++) {
                        if (str[i] == shortest_str[i]) {
                                freq[i]++;
                        }
                        else {
                                continue;
                        }
                }
        }

        string sol = "";

        for (int i = 0; i < freq.size(); i++) {
                if (freq[i] == (int)strs.size()) {
                        sol.push_back(shortest_str[i]);
                }
                else {
                        return sol;
                }
        }

        return sol;
    }
};
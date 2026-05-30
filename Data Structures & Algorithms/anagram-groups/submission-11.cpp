class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        map<vector<int>, vector<string>> anagrams; // {{0x26}, {{}}}

        for (const auto& str : strs) {
            vector<int> freq(26);
            for (int i = 0; i < str.length(); i++) {
                freq[str[i] - 'a']++;
            }

            anagrams[freq].push_back(str);
        }

        vector<vector<string>> sol;

        for (const auto& pair : anagrams) {
            sol.push_back(pair.second);
        }

        return sol;


    }
};

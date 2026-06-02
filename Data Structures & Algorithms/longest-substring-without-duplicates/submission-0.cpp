class Solution {
public:
    int lengthOfLongestSubstring(string s) { // "abcdefgdabcbb"
        if (s.length() == 1) return 1;

        unordered_map<char, int> freq;
        int l = 0;
        int max_len = 0;

        for (int r = 0; r < s.length(); r++) {
            freq[s[r]]++;

            while (freq[s[r]] > 1) {
                freq[s[l]]--;
                l++;
            }

            int length = r - l + 1;
            if (length > max_len) max_len = length;
        }

        return max_len;

    }
};

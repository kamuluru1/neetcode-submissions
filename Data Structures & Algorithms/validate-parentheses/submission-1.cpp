class Solution {
public:
    bool isValid(string s) {

        unordered_map<char, char> p_map = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        vector<char> opening = {'(', '[', '{'};

        stack<char> s1;

        for (auto c : s) {
            if (c == '(' || c == '[' || c == '{') {
                s1.push(c);
            } else {
                if (s1.size() == 0) return false;
                
                if (s1.top() == p_map[c]) {
                    s1.pop();
                } else return false;
            }
        }


        return s1.size() == 0;
    }
};

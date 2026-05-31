class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> stack;

        for (const auto& token : tokens) {
            if (token.length() > 1 || isdigit(token[0])) {
                stack.push_back(stoi(token));
            }
            else {
                int right = stack.back();
                stack.pop_back();

                int left = stack.back();
                stack.pop_back();

                

                if (token == "+") stack.push_back(left + right);
                else if (token == "-") stack.push_back(left - right);
                else if (token == "*") stack.push_back(left * right);
                else if(token == "/") stack.push_back(left / right);
                else continue;

            }
        }

        return stack.back();


    }
};

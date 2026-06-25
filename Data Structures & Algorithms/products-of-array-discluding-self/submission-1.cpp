class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums.size());
        vector<int> post(nums.size());
        vector<int> sol(nums.size());

        int pre_sum = 1;
        int post_sum = 1;

        for (int i = 0; i < nums.size(); i++) {
            pre[i] = pre_sum;
            pre_sum *= nums[i];

            post[nums.size() - 1 - i] = post_sum;
            post_sum *= nums[nums.size() - 1 - i];
        }

        for (int i = 0; i < nums.size(); i++) {
            sol[i] = pre[i] * post[i];
        }

        return sol;
    }
};

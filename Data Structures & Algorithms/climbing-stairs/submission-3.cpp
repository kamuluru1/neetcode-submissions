class Solution {
public:
    int climbStairs(int n) {
        if (n < 3) return n;
        int one = 1;
        int two = 2;
        int three;

        for (int i = n; i > 2; i--) {
            three = one + two;
            one = two;
            two = three;
        }

        return three;
    }
};
